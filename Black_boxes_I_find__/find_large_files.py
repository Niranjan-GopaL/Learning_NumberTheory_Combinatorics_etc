import os

def find_large_files(folder_path, min_size):
    large_files = []
    for root, dirs, files in os.walk(folder_path):
        for file in files:
            file_path = os.path.join(root, file)
            file_size = os.path.getsize(file_path)
            # Convert file size to MB
            file_size_mb = file_size / (1024 * 1024)
            if file_size_mb > min_size:
                large_files.append((file_path, file_size_mb))
    return large_files

if __name__ == "__main__":
    folder_path = "/mnt/g/My Drive/Obsidian_Vault/Media"
    min_size = 50  # Minimum size in MB

    large_files = find_large_files(folder_path, min_size)
    if large_files:
        print("Large files found:")
        for file_path, file_size_mb in large_files:
            print(f"{file_path}: {file_size_mb:.2f} MB")
    else:
        print("No large files found.")