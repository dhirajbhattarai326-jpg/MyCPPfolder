//quiz game with each question having 4 options and only one correct answer
#include <iostream>
int main()
{
    std::string questions[5]={"Tero bau ko ho?",
                              "Tero bau ko naam ke ho?",
                              "Tero bau ko thulo bhai ko naam ke ho?",
                              "Dhiraj Dada ko sampatti kati xa?",
                              "Tero bau ko sano bhai ko naam ke ho?"};
    std::string options[5][4]={{"1.Dhiraj_Dada","2.Dhiraj_Bhai","3.Dhiraj_Kaka","4.All_of_the_above"},
                              {"1.Dhiraj_Dada","2.Dhiraj_Bhai","3.Dhiraj_gangster","4.Bau chindainas mujoo"},
                              {"1.Dhiraj_dada_saab_koo_dada_ho_vanne_tha_xaina","2.Ksto mujoo raxa","3.Tait_vai_bau_bajeharuko_barema_halka_knowledge_rakh","4.Yei_ho_vai_tero_quiz_ko_knowledge?"},
                              {"1.Dhiraj_Dada_ko_sampatti_saab_vanda_dherai_xa","2.Dhiraj_dada_ko_vanda_kasaiko_sampatti_dher_xaina","3.Dhiraj_Jiu_ko_sampatti_Elone_mujoo_vanda_dher_xa","4.All_of_the_above"},
                              {"1.Dhiraj_Dada_lai_chindainass","2. k_mujoo_gandu_raxa","3.xee_chutiyaa","4.Dhiraj_dada_vagwan_ho_vanne_tha_xaina_ani_vagwan_ko_daju_vai_hunxaa_mujoo"}};
    int answer_key[5]={4,4,2,4,2};
    int user_answers;
    double score=0;
    for(int i=0;i<5;i++)
    {
        std::cout<<"**************************************************"<<std::endl;
        std::cout<<questions[i]<<std::endl;
        std::cout<<"**************************************************"<<std::endl;
        std::cout<<"Options: "<<std::endl;
        for(int j=0;j<4;j++)
        {
            std::cout<<options[i][j]<<std::endl;
        }
        std::cout<<"Enter your answer (1-4): ";
        std::cin>>user_answers;
        if(user_answers==answer_key[i])
        {
            std::cout<<"Correct!"<<std::endl;
            score++;
        }
        else
        {
            std::cout<<"Wrong! The correct answer is: "<<options[i][answer_key[i]-1]<<std::endl;
        }
    }
    std::cout<<"Your final score is: "<<score<<"/5"<<std::endl;
    std::cout<<"You got "<<(score/5)*100<<"% correct!"<<std::endl;
    return 0;   
}