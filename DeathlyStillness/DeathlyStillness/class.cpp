#include "class.h"
#include "engine.h"
void* UGameInstance::Getplayercontroller()
{
	DWORD64 Data = *(DWORD64*)(this + 0x38);
	DWORD64 playercontroller = *(DWORD64*)(Data);
	
	return *(void**)(playercontroller + 0x30);
}

string AActor::GetName()
{

	uint32_t Id = *(uint32_t*)((uint8_t*)this + 0x18);
	return ::GetName(Id);


}