#pragma once

 

// Package: CommonIconToolTipContent_Single

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C
// 0x0010 (0x0288 - 0x0278)
class UCommonIconToolTipContent_Single_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Description;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetBrokenData();
	void SetAmount(int32 InAmount);
	void SetEmotion(class FName InId);
	void SetTypeOnly(ESBRewardItemType RewardType);
	void SetText(const class FString& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_Single_C">();
	}
	static class UCommonIconToolTipContent_Single_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_Single_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_Single_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_Single_C");
static_assert(sizeof(UCommonIconToolTipContent_Single_C) == 0x000288, "Wrong size on UCommonIconToolTipContent_Single_C");
static_assert(offsetof(UCommonIconToolTipContent_Single_C, BG) == 0x000278, "Member 'UCommonIconToolTipContent_Single_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Single_C, Label_Description) == 0x000280, "Member 'UCommonIconToolTipContent_Single_C::Label_Description' has a wrong offset!");

}

