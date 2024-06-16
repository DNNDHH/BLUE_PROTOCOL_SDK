#pragma once

 

// Package: GuildNpcSelectMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildNpcSelectMode.GuildNpcSelectMode_C
// 0x0020 (0x0298 - 0x0278)
class UGuildNpcSelectMode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SelectItemMsgText;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildNpcSelectMode(int32 EntryPoint);
	void RefreshBannerText();
	void SetBannerText(const class FText& BannerText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildNpcSelectMode_C">();
	}
	static class UGuildNpcSelectMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildNpcSelectMode_C>();
	}
};
static_assert(alignof(UGuildNpcSelectMode_C) == 0x000008, "Wrong alignment on UGuildNpcSelectMode_C");
static_assert(sizeof(UGuildNpcSelectMode_C) == 0x000298, "Wrong size on UGuildNpcSelectMode_C");
static_assert(offsetof(UGuildNpcSelectMode_C, UberGraphFrame) == 0x000278, "Member 'UGuildNpcSelectMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildNpcSelectMode_C, Image_1) == 0x000280, "Member 'UGuildNpcSelectMode_C::Image_1' has a wrong offset!");
static_assert(offsetof(UGuildNpcSelectMode_C, Image_4) == 0x000288, "Member 'UGuildNpcSelectMode_C::Image_4' has a wrong offset!");
static_assert(offsetof(UGuildNpcSelectMode_C, SelectItemMsgText) == 0x000290, "Member 'UGuildNpcSelectMode_C::SelectItemMsgText' has a wrong offset!");

}

