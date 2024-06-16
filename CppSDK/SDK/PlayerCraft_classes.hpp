#pragma once

 

// Package: PlayerCraft

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerCraft.PlayerCraft_C
// 0x0188 (0x0400 - 0x0278)
class UPlayerCraft_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftJIngle_C*                         CraftJIngle;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftList_C*                           CraftList;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftResultItem_C*                     CraftResultItem;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftResultWeaponMulti_C*              CraftResultWeaponMulti;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftResultWeaponSingle_C*             CraftResultWeaponSingle;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_LackAdvRank;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_TimeOut;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageWhiteBG;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LoadBlocker;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Results;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_Craft_InAnime_C*              ShopMenu_Craft_InAnime;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsCrafted;                                        // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A05[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CraftedItemUID;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCloseAll;                                        // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         MultiCraft;                                        // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MultiCriticalNum;                                  // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMultiCompl;                                      // 0x0344(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A06[0x3];                                     // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CraftMaster;                                       // 0x0348(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LockInput;                                         // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A07[0x3];                                     // 0x03D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CraftedTotalAmount;                                // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowWeapon;                                      // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsCriticalCraft;                                   // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A08[0x6];                                     // 0x03DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  MultiCriticals;                                    // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsFailActive;                                     // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A09[0x3];                                     // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SaleAmount;                                        // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaleProfits;                                       // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature(bool IsCrafted);
	void OnCloseAll__DelegateSignature(bool IsCrafted);
	void ExecuteUbergraph_PlayerCraft(int32 EntryPoint);
	void Construct();
	void AdventureBoardError_Event(EDialogResult Result);
	void SetColorChangeMoney______1(bool WhiteColor);
	void OnSelectRecepi(const struct FCharacterCraftRecepi& Recepi);
	void OnMultiCompl(int32 ErrorCode, const bool IsCritical, const TArray<class FString>& ItemUniqueids, int32 CriticalNum, bool IsFail, int32 TotalAmount, const TArray<bool>& Criticals, const int32 Param_SaleAmount, const int32 Param_SaleProfits);
	void BndEvt__PlayerCraft_CraftList_K2Node_ComponentBoundEvent_1_SetCancelLock__DelegateSignature(bool Param_LockInput);
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void RepOnClose();
	void OnSelect(EDialogResult Result);
	void Destruct();
	void AnimFinished();
	void OnComplete(int32 ErrorCode, const bool IsSuccess, const bool IsCritical, const class FString& ItemUniqueId, const int32 TotalAmount, const int32 Param_SaleAmount, const int32 Param_SaleProfits);
	void Close();
	void Listen_Action_Close();
	void UpdateTimeoutVisible();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerCraft_C">();
	}
	static class UPlayerCraft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerCraft_C>();
	}
};
static_assert(alignof(UPlayerCraft_C) == 0x000008, "Wrong alignment on UPlayerCraft_C");
static_assert(sizeof(UPlayerCraft_C) == 0x000400, "Wrong size on UPlayerCraft_C");
static_assert(offsetof(UPlayerCraft_C, UberGraphFrame) == 0x000278, "Member 'UPlayerCraft_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, Btn_ShowHint) == 0x000280, "Member 'UPlayerCraft_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, CraftJIngle) == 0x000288, "Member 'UPlayerCraft_C::CraftJIngle' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, CraftList) == 0x000290, "Member 'UPlayerCraft_C::CraftList' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, CraftResultItem) == 0x000298, "Member 'UPlayerCraft_C::CraftResultItem' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, CraftResultWeaponMulti) == 0x0002A0, "Member 'UPlayerCraft_C::CraftResultWeaponMulti' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, CraftResultWeaponSingle) == 0x0002A8, "Member 'UPlayerCraft_C::CraftResultWeaponSingle' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, Cvs_LackAdvRank) == 0x0002B0, "Member 'UPlayerCraft_C::Cvs_LackAdvRank' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, Cvs_TimeOut) == 0x0002B8, "Member 'UPlayerCraft_C::Cvs_TimeOut' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, ImageWhiteBG) == 0x0002C0, "Member 'UPlayerCraft_C::ImageWhiteBG' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, LoadBlocker) == 0x0002C8, "Member 'UPlayerCraft_C::LoadBlocker' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, MyWalletWidget) == 0x0002D0, "Member 'UPlayerCraft_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, Results) == 0x0002D8, "Member 'UPlayerCraft_C::Results' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, ShopMenu_Craft_InAnime) == 0x0002E0, "Member 'UPlayerCraft_C::ShopMenu_Craft_InAnime' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, Switcher) == 0x0002E8, "Member 'UPlayerCraft_C::Switcher' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, UIBlocker) == 0x0002F0, "Member 'UPlayerCraft_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, OnClose) == 0x0002F8, "Member 'UPlayerCraft_C::OnClose' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, bIsCrafted) == 0x000308, "Member 'UPlayerCraft_C::bIsCrafted' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, CraftedItemUID) == 0x000310, "Member 'UPlayerCraft_C::CraftedItemUID' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, OnCloseAll) == 0x000320, "Member 'UPlayerCraft_C::OnCloseAll' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, MultiCraft) == 0x000330, "Member 'UPlayerCraft_C::MultiCraft' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, MultiCriticalNum) == 0x000340, "Member 'UPlayerCraft_C::MultiCriticalNum' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, IsMultiCompl) == 0x000344, "Member 'UPlayerCraft_C::IsMultiCompl' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, CraftMaster) == 0x000348, "Member 'UPlayerCraft_C::CraftMaster' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, LockInput) == 0x0003D0, "Member 'UPlayerCraft_C::LockInput' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, CraftedTotalAmount) == 0x0003D4, "Member 'UPlayerCraft_C::CraftedTotalAmount' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, IsShowWeapon) == 0x0003D8, "Member 'UPlayerCraft_C::IsShowWeapon' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, IsCriticalCraft) == 0x0003D9, "Member 'UPlayerCraft_C::IsCriticalCraft' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, MultiCriticals) == 0x0003E0, "Member 'UPlayerCraft_C::MultiCriticals' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, bIsFailActive) == 0x0003F0, "Member 'UPlayerCraft_C::bIsFailActive' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, SaleAmount) == 0x0003F4, "Member 'UPlayerCraft_C::SaleAmount' has a wrong offset!");
static_assert(offsetof(UPlayerCraft_C, SaleProfits) == 0x0003F8, "Member 'UPlayerCraft_C::SaleProfits' has a wrong offset!");

}

