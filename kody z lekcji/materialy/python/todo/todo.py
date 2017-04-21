# -*- coding: utf-8 -*-

import os
import sqlite3

from flask import Flask, g
from flask import render_template

app = Flask(__name__)
app.config.update(dict(
    SECRET_KEY = 'uciocinaimieninach',
    DATABASE = os.path.join(app.root_path, 'db.sqlite'),
    SITE_NAME = u'Moja lista zadań'
))

# funkcja łącząca z bazą danych
def connect_db():
    rv = sqlite3.connect(app.config['DATABASE'])
    rv.row_factory = sqlite3.Row
    return rv

# funkcja pomocnicza, tworzy lu zwraca połączenie z bazą
def get_db():
    if not hasattr(g, 'db'):
        g.db = connect_db()
    return g.db

@app.teardown_request
def close_db(error):
    if hasattr(g, 'db'):
        g.db.close()

@app.route('/')
def index():
    #return 'Witaj na mojej stronie!'
    db = get_db()
    pyt = db.execute('select id, tytul, isdone, datad from zadania order by datad;')
    wpisy = pyt.fetchall()
    return render_template('zadania.html', wpisy = wpisy)

if __name__ == '__main__':
    app.run(debug=True)
