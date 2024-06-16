#pragma once

 

// Package: BP_CharaSelectSaveGameObject

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CharaSelectSaveGameObject.BP_CharaSelectSaveGameObject_C
// 0x0060 (0x0088 - 0x0028)
class UBP_CharaSelectSaveGameObject_C final : public USaveGame
{
public:
	TArray<int32>                                 FacialNumList;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, int32>                    FacialNumMap;                                      // 0x0038(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CharaSelectSaveGameObject_C">();
	}
	static class UBP_CharaSelectSaveGameObject_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CharaSelectSaveGameObject_C>();
	}
};
static_assert(alignof(UBP_CharaSelectSaveGameObject_C) == 0x000008, "Wrong alignment on UBP_CharaSelectSaveGameObject_C");
static_assert(sizeof(UBP_CharaSelectSaveGameObject_C) == 0x000088, "Wrong size on UBP_CharaSelectSaveGameObject_C");
static_assert(offsetof(UBP_CharaSelectSaveGameObject_C, FacialNumList) == 0x000028, "Member 'UBP_CharaSelectSaveGameObject_C::FacialNumList' has a wrong offset!");
static_assert(offsetof(UBP_CharaSelectSaveGameObject_C, FacialNumMap) == 0x000038, "Member 'UBP_CharaSelectSaveGameObject_C::FacialNumMap' has a wrong offset!");

}

