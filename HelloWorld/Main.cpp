#include <iostream>

class Log
{
public:
	enum Level : const int
	{
		LevelError = 0, LevelWarning = 1, LevelInfo = 2
	};

private:
	Level m_LogLevel = LevelInfo;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
		    std::cout << "[WARNING]: " << message << std::endl;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
		    std::cout << "[INFO]: " << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLevel(Log::LevelError);
	log.Warn("Hello!");
	log.Error("Error");
	log.Info("Info");

	std::cin.get();
}