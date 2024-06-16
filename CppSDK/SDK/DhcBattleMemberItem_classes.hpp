#pragma once

 

// Package: DhcBattleMemberItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleMemberItem.DhcBattleMemberItem_C
// 0x0030 (0x02A8 - 0x0278)
class UDhcBattleMemberItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_2;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_5;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_7;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DhcBattleMemberItem(int32 EntryPoint);
	void SetDPS(float DPS);
	void SetPlayerInfo(const class FString& Param_Name, ESBClassType ClassType, int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleMemberItem_C">();
	}
	static class UDhcBattleMemberItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleMemberItem_C>();
	}
};
static_assert(alignof(UDhcBattleMemberItem_C) == 0x000008, "Wrong alignment on UDhcBattleMemberItem_C");
static_assert(sizeof(UDhcBattleMemberItem_C) == 0x0002A8, "Wrong size on UDhcBattleMemberItem_C");
static_assert(offsetof(UDhcBattleMemberItem_C, UberGraphFrame) == 0x000278, "Member 'UDhcBattleMemberItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleMemberItem_C, ClassIcon) == 0x000280, "Member 'UDhcBattleMemberItem_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleMemberItem_C, Image) == 0x000288, "Member 'UDhcBattleMemberItem_C::Image' has a wrong offset!");
static_assert(offsetof(UDhcBattleMemberItem_C, SBRuntimeTextBlock_2) == 0x000290, "Member 'UDhcBattleMemberItem_C::SBRuntimeTextBlock_2' has a wrong offset!");
static_assert(offsetof(UDhcBattleMemberItem_C, SBRuntimeTextBlock_5) == 0x000298, "Member 'UDhcBattleMemberItem_C::SBRuntimeTextBlock_5' has a wrong offset!");
static_assert(offsetof(UDhcBattleMemberItem_C, SBRuntimeTextBlock_7) == 0x0002A0, "Member 'UDhcBattleMemberItem_C::SBRuntimeTextBlock_7' has a wrong offset!");

}

