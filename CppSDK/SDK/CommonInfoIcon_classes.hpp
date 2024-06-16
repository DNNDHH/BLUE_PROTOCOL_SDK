#pragma once

 

// Package: CommonInfoIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonInfoIcon.CommonInfoIcon_C
// 0x0190 (0x0408 - 0x0278)
class UCommonInfoIcon_C final : public UUserWidget
{
public:
	class UImage*                                 InfoIcon;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bTooltipEnable;                                    // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E91[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommonToolTipDetail_Fixed_C*       CachedToolTip;                                     // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InfoName;                                          // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 InfoType;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 InfoDesc;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsInfoNameAndTypeOnly;                            // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsInfoNameAndDescOnly;                            // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsStackImagineMode;                               // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar_0;                                          // 0x02C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E92[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InfoType2;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 InfoDesc2;                                         // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          StackBEffectiveDisplay;                            // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E93[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           Info;                                              // 0x02F0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetInfo(const class FString& InInfoName, const class FString& InInfoType, const class FString& InInfoDesc);
	void SetInfoNameAndType(const class FString& InInfoName, const class FString& InInfoType);
	void SetInfoNameAndDesc(const class FString& InInfoName, const class FString& InInfoDesc);
	void Set_Info_Stack_Imagine(const class FString& InInfoName, const class FString& InInfoType, const class FString& InInfoDesc, const class FString& InInfoType2, const class FString& InInfoDesc2, const struct FOwnItemInfo& Param_Info, bool Param_StackBEffectiveDisplay);
	class UWidget* Get_InfoIcon_ToolTipWidget_0();
	void CreateToolTipWidgetifNeeded(class UWBP_CommonToolTipDetail_Fixed_C** OutTooltip);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonInfoIcon_C">();
	}
	static class UCommonInfoIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInfoIcon_C>();
	}
};
static_assert(alignof(UCommonInfoIcon_C) == 0x000008, "Wrong alignment on UCommonInfoIcon_C");
static_assert(sizeof(UCommonInfoIcon_C) == 0x000408, "Wrong size on UCommonInfoIcon_C");
static_assert(offsetof(UCommonInfoIcon_C, InfoIcon) == 0x000278, "Member 'UCommonInfoIcon_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, bTooltipEnable) == 0x000280, "Member 'UCommonInfoIcon_C::bTooltipEnable' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, CachedToolTip) == 0x000288, "Member 'UCommonInfoIcon_C::CachedToolTip' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, InfoName) == 0x000290, "Member 'UCommonInfoIcon_C::InfoName' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, InfoType) == 0x0002A0, "Member 'UCommonInfoIcon_C::InfoType' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, InfoDesc) == 0x0002B0, "Member 'UCommonInfoIcon_C::InfoDesc' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, bIsInfoNameAndTypeOnly) == 0x0002C0, "Member 'UCommonInfoIcon_C::bIsInfoNameAndTypeOnly' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, bIsInfoNameAndDescOnly) == 0x0002C1, "Member 'UCommonInfoIcon_C::bIsInfoNameAndDescOnly' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, bIsStackImagineMode) == 0x0002C2, "Member 'UCommonInfoIcon_C::bIsStackImagineMode' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, NewVar_0) == 0x0002C3, "Member 'UCommonInfoIcon_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, InfoType2) == 0x0002C8, "Member 'UCommonInfoIcon_C::InfoType2' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, InfoDesc2) == 0x0002D8, "Member 'UCommonInfoIcon_C::InfoDesc2' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, StackBEffectiveDisplay) == 0x0002E8, "Member 'UCommonInfoIcon_C::StackBEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(UCommonInfoIcon_C, Info) == 0x0002F0, "Member 'UCommonInfoIcon_C::Info' has a wrong offset!");

}

