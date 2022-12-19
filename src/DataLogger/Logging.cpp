#include "Logging.h"

Logging::Logging() {}

void Logging::createFile(fs::FS &fs, char *path)
{
  Serial.printf("Creating file: %s\n", path);

  File file = fs.open(path, FILE_WRITE);

  if (!file)
  {
    Serial.printf("Failed to create file: %s\n", path);
    return;
  }

  file.close();
}

void Logging::removeFile(fs::FS &fs, char *path)
{
  Serial.printf("Removing file: %s\n", path);

  if (fs.remove(path))
  {
    Serial.printf("File deleted\n");
  }
  else
  {
    Serial.printf("Failed to remove file: %s\n", path);
  }
}

/**
   Appends to a created file
*/
void Logging::writeFile(fs::FS &fs, char *path, char *content)
{
  Serial.printf("Writing to file: %s\n", path);

  File file = fs.open(path, FILE_APPEND);

  if (!file)
  {
    Serial.printf("Error opening file: %s\n", path);
    return;
  }

  if (file.print(content))
  {
    Serial.printf("Content wrote to file: %s\n", path);
  }
  else
  {
    Serial.printf("Error writing to file: %s\n", path);
  }

  file.close();
}

void Logging::readFile(fs::FS &fs, char *path)
{
  Serial.printf("Reading file: %s\n", path);

  File file = fs.open(path, FILE_READ);

  if (!file)
  {
    Serial.printf("Error reading file: %s\n", path);
    return;
  }

  Serial.printf("Content of %s:\n", path);

  while (file.available())
  {
    Serial.write(file.read());
  }

  file.close();
}

bool checkFileExists(fs::FS &fs, char *path)
{
  Serial.printf("Checking if file exists: %s\n", path);

  File file = fs.open(path, FILE_READ);

  if (!file)
  {
    Serial.printf("File does not exist\n", path);
    return false;
  }

  file.close();
  return true;
}
