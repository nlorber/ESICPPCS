void FirstHisto(){
TH1F* h = new TH1F("fh","My first histogram",100,-5,5);
h->FillRandom("gaus",100000);
(*h).Draw();
}
