#ifdef 7_Seg_Disp {
int tl;
int tr;
int t;
int m;
int bl;
int br;
int b;
void off () {
    digitalWrite(tl, 0);
    digitalWrite(tr, 0);
    digitalWrite(t, 0);
    digitalWrite(m, 0);
    digitalWrite(bl, 0);
    digitalWrite(br, 0);
    digitalWrite(b, 0);
}
  if (print1 == "A") {
    off ();
    digitalWrite(tl, HIGH);
  }
}
#endif
