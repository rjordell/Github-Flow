#include <iostream>

<<<<<<< HEAD
			unsigned int count(const std::string& str) {
				        unsigned int counter = 0;
					        bool on_space = true;
=======
int count(const std::string& phrase) {
	    return 0;
}
>>>>>>> 1377971861743744d798218da80602942133f042

						        for(int i = 0; i < str.size(); i++) {
								                if (std::isspace(str[i]))
											                        on_space = true;
										                else if (on_space) {
													                        counter++;
																                        on_space = false;
																			                }
												        }

							        return counter;
								>>>>>>> main
			}
