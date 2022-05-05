int* glob;
void process(int* q){
  // …
  glob = q; 
}

void g1(){
  int* p = new int{7};
  process(p);
  delete p;
  // … 
  *glob = 9; //悬浮指针
}
void g2(){
  int* p = new int{7};
  process(p);
  delete p; 
  // …
  delete glob; //重复释放
}
void g3(){
  int x = 7;
  int* p = &x;
  process(p);
  // …
  delete glob;// 释放栈指针
}





