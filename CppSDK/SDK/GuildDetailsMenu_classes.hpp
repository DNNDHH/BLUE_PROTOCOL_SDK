#pragma once

 

// Package: GuildDetailsMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildDetailsMenu.GuildDetailsMenu_C
// 0x0018 (0x0290 - 0x0278)
class UGuildDetailsMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BackgroundBlur_01;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildDetails_C*                        GuildDetails;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildDetailsMenu(int32 EntryPoint);
	void OnCompleteGetGuildData_Event(const int32 RetCode);
	void BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature(bool Edit);
	void Construct();
	class USBPlayerGuildComponent* GetGuildComp();
	void Initialize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildDetailsMenu_C">();
	}
	static class UGuildDetailsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildDetailsMenu_C>();
	}
};
static_assert(alignof(UGuildDetailsMenu_C) == 0x000008, "Wrong alignment on UGuildDetailsMenu_C");
static_assert(sizeof(UGuildDetailsMenu_C) == 0x000290, "Wrong size on UGuildDetailsMenu_C");
static_assert(offsetof(UGuildDetailsMenu_C, UberGraphFrame) == 0x000278, "Member 'UGuildDetailsMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildDetailsMenu_C, BackgroundBlur_01) == 0x000280, "Member 'UGuildDetailsMenu_C::BackgroundBlur_01' has a wrong offset!");
static_assert(offsetof(UGuildDetailsMenu_C, GuildDetails) == 0x000288, "Member 'UGuildDetailsMenu_C::GuildDetails' has a wrong offset!");

}

