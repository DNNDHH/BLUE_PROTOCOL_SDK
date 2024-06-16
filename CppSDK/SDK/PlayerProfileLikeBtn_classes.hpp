#pragma once

 

// Package: PlayerProfileLikeBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ESendLikeError_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerProfileLikeBtn.PlayerProfileLikeBtn_C
// 0x0030 (0x02A8 - 0x0278)
class UPlayerProfileLikeBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnLike;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Offline;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_60;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BtnEventComplete;                                  // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BtnEventComplete__DelegateSignature();
	void ExecuteUbergraph_PlayerProfileLikeBtn(int32 EntryPoint);
	void SetButtonErrorType(int32 InWarning, bool InIsSystemMessage);
	void OnSendLikeEvent(const bool bWasSuccessful, const int32 RetCode, const int32 Warning);
	void SendLike(const TArray<struct FLikeSend>& SendLikeList);
	void BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	bool SetData(bool IsSendLIke, int32 OnlineStatus, bool PSOnlyDiff);
	void SetButtonEnable(bool bInIsEnabled);
	void SetButtonType(ESendLikeError Selection);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerProfileLikeBtn_C">();
	}
	static class UPlayerProfileLikeBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerProfileLikeBtn_C>();
	}
};
static_assert(alignof(UPlayerProfileLikeBtn_C) == 0x000008, "Wrong alignment on UPlayerProfileLikeBtn_C");
static_assert(sizeof(UPlayerProfileLikeBtn_C) == 0x0002A8, "Wrong size on UPlayerProfileLikeBtn_C");
static_assert(offsetof(UPlayerProfileLikeBtn_C, UberGraphFrame) == 0x000278, "Member 'UPlayerProfileLikeBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerProfileLikeBtn_C, BtnLike) == 0x000280, "Member 'UPlayerProfileLikeBtn_C::BtnLike' has a wrong offset!");
static_assert(offsetof(UPlayerProfileLikeBtn_C, Offline) == 0x000288, "Member 'UPlayerProfileLikeBtn_C::Offline' has a wrong offset!");
static_assert(offsetof(UPlayerProfileLikeBtn_C, WidgetSwitcher_60) == 0x000290, "Member 'UPlayerProfileLikeBtn_C::WidgetSwitcher_60' has a wrong offset!");
static_assert(offsetof(UPlayerProfileLikeBtn_C, BtnEventComplete) == 0x000298, "Member 'UPlayerProfileLikeBtn_C::BtnEventComplete' has a wrong offset!");

}

