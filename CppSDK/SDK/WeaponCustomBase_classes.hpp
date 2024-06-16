#pragma once

 

// Package: WeaponCustomBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponCustomBase.WeaponCustomBase_C
// 0x0010 (0x0520 - 0x0510)
class UWeaponCustomBase_C : public USBUIWeaponCustomBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0510(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsFusionTicketSuccess;                             // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFusionCostSuccess;                               // 0x0519(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WeaponCustomBase(int32 EntryPoint);
	void RequestGetRewardBoost();
	void OnRequest_GetRewardBoost_cmpl(int32 InRetCode);
	void CreateConfirmDialog(const int32 InTextID);
	void OnCompletedConfirmDialog(EDialogResult Result);
	void OnCompleteMasterFusionTicket(bool bSuccess);
	void OnCompleteMasterFusionCost(bool bSuccess);
	void RequestMasterData();
	void DeregisterESCKey();
	void RegisterESCKey();
	void OnPressESCKey();
	void UnbindOnCompleteMasterDataLoad();
	void BindOnCompleteMasterDataLoad();
	void CompleteMasterData(bool IsSuccess);
	void CompletedRewardBoost(int32 InRetCode);
	void SetEnableDecide(bool InEnabled);
	void SetVisibleWeaponStatusWindow(bool InVisible);
	void SetVisibleTokenBox(bool InVisible);
	void SetVisibleInfomation(bool InVisible);
	void SetVisibleDecide(bool InVisible);
	void SetVisibleBlocker(bool InVisible);
	void SetVisibleLoading(bool InVisible);
	void SetVisibleSuccess(bool InVisible);
	void SetVisibleResult(bool InVisible);
	void OpenSuccess();
	void OpenResult();
	void FinishedSuccess();
	void CreateDialog(const class FText& Message, class UBP_Dialog_C** OutDialog);
	void CreateDialogwithDelegate(const class FText& Message, TDelegate<void(EDialogResult Result)> End_Dynamic_Delegate, class UBP_Dialog_C** OutDialog);
	void CreateDialogYesNo(const class FText& Message, TDelegate<void(EDialogResult Result)> EndDynamicDelegate, class UBP_Dialog_C** OutDialog);
	void OnInit();
	void OnTerm();
	void OnBind();
	void OnUnbind();
	void OnRequest();
	void Reset();
	void OnComplete(int32 ErrorCode);
	void ClickedDecide();
	void ClickedBack();

	class FText GetUseConfirmDialogText(const struct FOwnItemInfo& Param_SelectWeapon) const;
	class FText GetTokenConfirmDialogText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponCustomBase_C">();
	}
	static class UWeaponCustomBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponCustomBase_C>();
	}
};
static_assert(alignof(UWeaponCustomBase_C) == 0x000008, "Wrong alignment on UWeaponCustomBase_C");
static_assert(sizeof(UWeaponCustomBase_C) == 0x000520, "Wrong size on UWeaponCustomBase_C");
static_assert(offsetof(UWeaponCustomBase_C, UberGraphFrame) == 0x000510, "Member 'UWeaponCustomBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponCustomBase_C, IsFusionTicketSuccess) == 0x000518, "Member 'UWeaponCustomBase_C::IsFusionTicketSuccess' has a wrong offset!");
static_assert(offsetof(UWeaponCustomBase_C, IsFusionCostSuccess) == 0x000519, "Member 'UWeaponCustomBase_C::IsFusionCostSuccess' has a wrong offset!");

}

