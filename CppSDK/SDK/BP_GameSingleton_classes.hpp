#pragma once

 

// Package: BP_GameSingleton

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GameSingleton.BP_GameSingleton_C
// 0x0028 (0x0DB0 - 0x0D88)
class UBP_GameSingleton_C final : public USBGameSingleton
{
public:
	TSoftObjectPtr<class UDataTable>              ScriptAssetDB;                                     // 0x0D88(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GameSingleton_C">();
	}
	static class UBP_GameSingleton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GameSingleton_C>();
	}
};
static_assert(alignof(UBP_GameSingleton_C) == 0x000008, "Wrong alignment on UBP_GameSingleton_C");
static_assert(sizeof(UBP_GameSingleton_C) == 0x000DB0, "Wrong size on UBP_GameSingleton_C");
static_assert(offsetof(UBP_GameSingleton_C, ScriptAssetDB) == 0x000D88, "Member 'UBP_GameSingleton_C::ScriptAssetDB' has a wrong offset!");

}

