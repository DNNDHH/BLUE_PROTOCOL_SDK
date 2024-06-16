#pragma once

 

// Package: CommunicateSettingMenu_NameAndAchieve

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommunicateSettingMenu_NameAndAchieve.CommunicateSettingMenu_NameAndAchieve_C
// 0x0038 (0x02B0 - 0x0278)
class UCommunicateSettingMenu_NameAndAchieve_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            SBButton_C_91;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAchievementName;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPlayerName;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsAchievementChange;                               // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6093[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAchievementSelectWindowOpenEvent;                // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAchievementSelectWindowOpenEvent__DelegateSignature();
	void ExecuteUbergraph_CommunicateSettingMenu_NameAndAchieve(int32 EntryPoint);
	void ErrorDataSet();
	void BndEvt__CommunicateSettingMenu_NameAndAchieve_SBButton_C_91_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ClearAchievementText();
	void SetAchievementName(int32 InAchievementId, bool* IsResult);
	void SetName(const class FString& InName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommunicateSettingMenu_NameAndAchieve_C">();
	}
	static class UCommunicateSettingMenu_NameAndAchieve_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommunicateSettingMenu_NameAndAchieve_C>();
	}
};
static_assert(alignof(UCommunicateSettingMenu_NameAndAchieve_C) == 0x000008, "Wrong alignment on UCommunicateSettingMenu_NameAndAchieve_C");
static_assert(sizeof(UCommunicateSettingMenu_NameAndAchieve_C) == 0x0002B0, "Wrong size on UCommunicateSettingMenu_NameAndAchieve_C");
static_assert(offsetof(UCommunicateSettingMenu_NameAndAchieve_C, UberGraphFrame) == 0x000278, "Member 'UCommunicateSettingMenu_NameAndAchieve_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_NameAndAchieve_C, SBButton_C_91) == 0x000280, "Member 'UCommunicateSettingMenu_NameAndAchieve_C::SBButton_C_91' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_NameAndAchieve_C, TxtAchievementName) == 0x000288, "Member 'UCommunicateSettingMenu_NameAndAchieve_C::TxtAchievementName' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_NameAndAchieve_C, TxtPlayerName) == 0x000290, "Member 'UCommunicateSettingMenu_NameAndAchieve_C::TxtPlayerName' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_NameAndAchieve_C, IsAchievementChange) == 0x000298, "Member 'UCommunicateSettingMenu_NameAndAchieve_C::IsAchievementChange' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_NameAndAchieve_C, OnAchievementSelectWindowOpenEvent) == 0x0002A0, "Member 'UCommunicateSettingMenu_NameAndAchieve_C::OnAchievementSelectWindowOpenEvent' has a wrong offset!");

}

