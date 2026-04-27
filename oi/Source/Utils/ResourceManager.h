#pragma once
#include <iostream>
#include <filesystem>
#include <sstream>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <unordered_map>

struct TextureInfo
{
	sf::Texture Texture;
	sf::Sprite Sprite;
};

extern std::unordered_map<std::string, TextureInfo> GTextureMap;

class ResourceManager
{
public:
	static inline std::vector<std::string> TEXTURE_EXTENSIONS = { "png", "jpg", "jpeg" };
	static void LoadTextures(const std::string folderPath);
	static const TextureInfo* GetTextureInfo(const std::string& key);
private:

};