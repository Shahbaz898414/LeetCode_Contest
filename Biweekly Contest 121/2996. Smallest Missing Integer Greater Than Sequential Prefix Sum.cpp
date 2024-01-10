#include <bits/stdc++.h>
using namespace std;

int missingInteger(vector<int>& nums) {
        int countSum = nums[0];
        for(int i =1; i<nums.size();i++){
            if(nums[i-1]+1 == nums[i]) countSum += nums[i];
            else break;
        }

        // cout<<countSum<<" countSum"<<endl;
        sort(nums.begin(),nums.end());
        for(int i = 0; i< nums.size(); i++){
            if(countSum == nums[i]){
              // cout<<i<<" ";
                countSum++;
            }
        }

        // cout<<endl;


        return countSum;


        // 1 3 4 5 12 13 14
        
}


int main()
{

    int n;
    cin >> n;

   string s;cin>>s;
    
}




/*


Dear  Saurabh Goel,

I hope this message finds you well. My name is Shahbaz Khan, and I am writing to express my keen interest in the Software Development Engineer Intern position at Amber. Having thoroughly reviewed the job description and company values, I am enthusiastic about the opportunity to contribute to the development of your front-end applications and be a part of the innovative team at Amber.

Why I'm a Good Fit:

Educational Background: I am currently pursuing a BEE in Electronic and Computer Science at the University of Mumbai, and I am expecting to graduate in May 2024 with a First-class degree. My academic journey has equipped me with a solid foundation in programming, data structures, algorithms, and various relevant coursework, including Object-Oriented Programming, Open Source Software Engineering, and Analysis and Design of Algorithms.

Technical Skills: My skill set aligns perfectly with the requirements for the Software Development Engineer Intern role. I am proficient in a range of programming languages, including Python, C/C++, HTML/CSS, JavaScript, and Java. I have hands-on experience with modern front-end frameworks such as React and NextJS, as well as familiarity with backend technologies, databases, and APIs – all of which are emphasized in the job description.

Hands-on Experience: As evidenced in my resume, I have practical experience as a MERN Intern at NULL CLASS, where I contributed to the development of a password reset feature, login history tracking, and implemented responsive design practices. Additionally, my role as a Mentor Intern at TLE ELIMINATORS allowed me to offer optimized code snippets, enhance project recognition, and provide comprehensive documentation, showcasing my ability to collaborate effectively and deliver high-quality work.

Achievements: I have consistently performed well in competitive programming, achieving a Global Rank of 65 in CodeChef Jan Starters 87, 2023, and a Global Rank of 323 in Codeforces Round 902 (Div. 2). These experiences have honed my problem-solving skills and the ability to optimize code for efficiency.

Projects: I have successfully completed projects such as PROJECTS FAIR and a SHOPPING WEBSITE, demonstrating my proficiency in utilizing technologies like React, JavaScript, Node.js, MongoDB, and Firebase. These projects showcase my ability to create responsive, secure, and feature-rich web applications.

I am confident that my academic background, technical skills, and hands-on experience make me a strong candidate for the Software Development Engineer Intern position at Amber. I am particularly drawn to Amber's mission of making international mobility and living seamless for students, and I am eager to contribute to the platform's growth.

Thank you for considering my application. I look forward to the possibility of discussing how my skills and experiences align with Amber's goals and how I can contribute to the success of your team.

Best Regards,

Shahbaz Khan
7710968756



*/