import os

def rename_files(folder_path):
    files = os.listdir(folder_path)
    print(files)
    
    for file_name in files:
        if file_name not in ['Better_Solutions' , 'rename_files.py' , '09_1_2024_Mon_all_neg_oneSide_all_pos_otherSide_of_Array.cpp' , '09_1_2024_Mon_sort_0_1_2.cpp' ]:
            old_path = os.path.join(folder_path, file_name)
            base_name, file_extension = os.path.splitext(file_name)
            new_file_name = f"{prefix}_{base_name}{file_extension}"
            
            prefix = "10_1"
            new_path = os.path.join(folder_path, new_file_name)
            
            
        if file_name not in [ '09_1_2024_Mon_sort_0_1_2.cpp' , '09_1_2024_Mon_all_neg_oneSide_all_pos_otherSide_of_Array.cpp' ]:
            old_path = os.path.join(folder_path, file_name)
            base_name, file_extension = os.path.splitext(file_name)

            prefix = "9_1"
            new_file_name = f"{prefix}_{base_name}{file_extension}"
            new_path = os.path.join(folder_path, new_file_name)
            
        
        os.rename(old_path, new_path)


if __name__ == "__main__":
    folder_path = "/mnt/d/Code Practise/Learning_NumberTheory_Combinatorics_etc/Arrays"  # Replace with the path to your folder
    
    rename_files(folder_path)