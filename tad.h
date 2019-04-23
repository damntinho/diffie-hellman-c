//GERADORES DE CHAVES
int generatePubKey(int carga, int privKeyAna, int primo);
int generateCryptKey(int pubKey, int privKey, int primo);

//VERIFICADOR DE CRIPTOGRAFIA
int cryptChecker(int cryptKey1, int cryptKey2, int pubKey1, int pubKey2);

//CABECALHOS
void cabDiffie();
void cabAtacante(int *atacante);
