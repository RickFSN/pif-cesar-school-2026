#include <stdio.h>
#include <stdlib.h>

int main() {
    int h_ini, m_ini, s_ini, duracao_s;
    int h_fim, m_fim, s_fim, tempo_total_s;

    printf("Horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &h_ini, &m_ini, &s_ini);
    
    printf("Duracao do experimento (em segundos): ");
    scanf("%d", &duracao_s);

    
    tempo_total_s = (h_ini * 3600) + (m_ini * 60) + s_ini + duracao_s;

    h_fim = (tempo_total_s / 3600) % 24; 
    m_fim = (tempo_total_s % 3600) / 60;
    s_fim = (tempo_total_s % 3600) % 60;

    printf("Horario de termino exato: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);

    system("PAUSE");
    return 0;
}