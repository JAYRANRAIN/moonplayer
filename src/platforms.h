#ifndef PLATFORMS_H
#define PLATFORMS_H

#include <QString>

QString getAppPath(void);
QString getUserPath(void);
void createUserPath(void);

// Get FFmpeg's file path
QString ffmpegFilePath(void);

// Get you-get's file path
QString yougetFilePath(void);
QString parserUpgraderPath(void);

#endif // PLATFORMS_H
