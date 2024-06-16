#pragma once

 

// Package: KeyConfig_Title

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass KeyConfig_Title.KeyConfig_Title_C
// 0x0010 (0x0288 - 0x0278)
class UKeyConfig_Title_C final : public UUserWidget
{
public:
	class UImage*                                 Image_30;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Title;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTitle(int32 TextId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyConfig_Title_C">();
	}
	static class UKeyConfig_Title_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyConfig_Title_C>();
	}
};
static_assert(alignof(UKeyConfig_Title_C) == 0x000008, "Wrong alignment on UKeyConfig_Title_C");
static_assert(sizeof(UKeyConfig_Title_C) == 0x000288, "Wrong size on UKeyConfig_Title_C");
static_assert(offsetof(UKeyConfig_Title_C, Image_30) == 0x000278, "Member 'UKeyConfig_Title_C::Image_30' has a wrong offset!");
static_assert(offsetof(UKeyConfig_Title_C, Title) == 0x000280, "Member 'UKeyConfig_Title_C::Title' has a wrong offset!");

}

