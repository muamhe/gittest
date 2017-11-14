program kopiec;
 var
 i,j:integer;
 x,dol, gora:integer;
 tablica1n:array[1..100] of integer;
begin
procedure HeapSort(Dol,Gora:integer; var x:Tablica1n);
   {Porzadkowanie metoda stogowa}
  var i:integer;
  procedure Przesiewanie(i,j:integer);
   var k:integer;
  begin
   k:=2*i;
   while k<=j do begin
    if k<j then if x[k]<x[k+1] then k:=k+1;
    if x[k]>x[i] then begin
     Przestaw(x[k],x[i]);
     i:=k;
     k:=i+i
    end
    else k:=j+1
   end {while}
  end; {Przesiewanie}
 begin
   { budowanie stogu }
  i:=(Gora-Dol+1) div 2;
  while i>=Dol do begin
   Przesiewanie(i,Gora);
   i:=i-1
  end;
   {sortowanie}
  i:=Gora;
  while i>Dol do
  begin
   Przestaw(x[Dol],x[i]);
   i:=i-1;
   Przesiewanie(1,i)
  end
 end; {HeapSort}

 begin
 heapsort;
 end;
 repeat until keypressed
 end.
