#pragma once

 

// Package: InhelitPerkView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InhelitPerkView.InhelitPerkView_C
// 0x0168 (0x03E0 - 0x0278)
class UInhelitPerkView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Perks;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBStackBPerk>                  Perkb;                                             // 0x0290(0x0010)(Edit, BlueprintVisible)
	struct FOwnItemInfo                           BaseWeapon;                                        // 0x02A0(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             ChangePerkRequest;                                 // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PurgeRequest;                                      // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Disable_Change_Btn;                                // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DisablePurgeBtn;                                   // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ChangePerkRequest__DelegateSignature(const struct FSBStackBPerk& ChangeTarget);
	void PurgeRequest__DelegateSignature(const struct FSBStackBPerk& PurgeTarget);
	void ExecuteUbergraph_InhelitPerkView(int32 EntryPoint);
	void InhelitPerkView_ChangePerk(const struct FSBStackBPerk& SelectData);
	void PreConstruct(bool IsDesignTime);
	void GenerateView();
	void Initialize();
	void SetPerkB(TArray<struct FSBStackBPerk>& Param_Perkb);
	void SetBaseWeapon(const struct FOwnItemInfo& Param_BaseWeapon);
	void InhelitPerkView_AutoGenFunc(const struct FSBStackBPerk& SelectPerk);
	void DisableAllChangeBtn(bool bDisableChangeBtn);
	void DisableAllPurgeBtn(bool Param_DisablePurgeBtn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InhelitPerkView_C">();
	}
	static class UInhelitPerkView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInhelitPerkView_C>();
	}
};
static_assert(alignof(UInhelitPerkView_C) == 0x000008, "Wrong alignment on UInhelitPerkView_C");
static_assert(sizeof(UInhelitPerkView_C) == 0x0003E0, "Wrong size on UInhelitPerkView_C");
static_assert(offsetof(UInhelitPerkView_C, UberGraphFrame) == 0x000278, "Member 'UInhelitPerkView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInhelitPerkView_C, CanvasPanel_0) == 0x000280, "Member 'UInhelitPerkView_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UInhelitPerkView_C, VB_Perks) == 0x000288, "Member 'UInhelitPerkView_C::VB_Perks' has a wrong offset!");
static_assert(offsetof(UInhelitPerkView_C, Perkb) == 0x000290, "Member 'UInhelitPerkView_C::Perkb' has a wrong offset!");
static_assert(offsetof(UInhelitPerkView_C, BaseWeapon) == 0x0002A0, "Member 'UInhelitPerkView_C::BaseWeapon' has a wrong offset!");
static_assert(offsetof(UInhelitPerkView_C, ChangePerkRequest) == 0x0003B8, "Member 'UInhelitPerkView_C::ChangePerkRequest' has a wrong offset!");
static_assert(offsetof(UInhelitPerkView_C, PurgeRequest) == 0x0003C8, "Member 'UInhelitPerkView_C::PurgeRequest' has a wrong offset!");
static_assert(offsetof(UInhelitPerkView_C, Disable_Change_Btn) == 0x0003D8, "Member 'UInhelitPerkView_C::Disable_Change_Btn' has a wrong offset!");
static_assert(offsetof(UInhelitPerkView_C, DisablePurgeBtn) == 0x0003D9, "Member 'UInhelitPerkView_C::DisablePurgeBtn' has a wrong offset!");

}

