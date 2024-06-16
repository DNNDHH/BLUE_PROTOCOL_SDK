#pragma once

 

// Package: ErrorTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GuildErrorDisplay_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ErrorTooltip.ErrorTooltip_C
// 0x0028 (0x02A0 - 0x0278)
class UErrorTooltip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_145;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgErrTooltipBg;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ErrorText;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EGuildErrorDisplay                            ErrorType;                                         // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ErrorTooltip(int32 EntryPoint);
	void SetErrorType(EGuildErrorDisplay Param_ErrorType);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ErrorTooltip_C">();
	}
	static class UErrorTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UErrorTooltip_C>();
	}
};
static_assert(alignof(UErrorTooltip_C) == 0x000008, "Wrong alignment on UErrorTooltip_C");
static_assert(sizeof(UErrorTooltip_C) == 0x0002A0, "Wrong size on UErrorTooltip_C");
static_assert(offsetof(UErrorTooltip_C, UberGraphFrame) == 0x000278, "Member 'UErrorTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UErrorTooltip_C, Image_145) == 0x000280, "Member 'UErrorTooltip_C::Image_145' has a wrong offset!");
static_assert(offsetof(UErrorTooltip_C, ImgErrTooltipBg) == 0x000288, "Member 'UErrorTooltip_C::ImgErrTooltipBg' has a wrong offset!");
static_assert(offsetof(UErrorTooltip_C, Txt_ErrorText) == 0x000290, "Member 'UErrorTooltip_C::Txt_ErrorText' has a wrong offset!");
static_assert(offsetof(UErrorTooltip_C, ErrorType) == 0x000298, "Member 'UErrorTooltip_C::ErrorType' has a wrong offset!");

}

