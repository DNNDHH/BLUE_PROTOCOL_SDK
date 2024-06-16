#pragma once

 

// Package: PlayerProfileFollowBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerProfileFollowBtn.PlayerProfileFollowBtn_C
// 0x0038 (0x02B0 - 0x0278)
class UPlayerProfileFollowBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnFollow;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtFollow;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bFollow;                                           // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FB7[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventClicked;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)
	bool                                          bMouseOverlap;                                     // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFriend;                                           // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDoneSend;                                         // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCanSend;                                          // 0x02AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventClicked__DelegateSignature();
	void ExecuteUbergraph_PlayerProfileFollowBtn(int32 EntryPoint);
	void BndEvt__BtnFollow_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnFollow_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnFollow_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void SetFollow(bool Param_bFollow);
	void SetFriend(bool Param_bFriend, bool Param_bDoneSend, bool Param_bCanSend);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerProfileFollowBtn_C">();
	}
	static class UPlayerProfileFollowBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerProfileFollowBtn_C>();
	}
};
static_assert(alignof(UPlayerProfileFollowBtn_C) == 0x000008, "Wrong alignment on UPlayerProfileFollowBtn_C");
static_assert(sizeof(UPlayerProfileFollowBtn_C) == 0x0002B0, "Wrong size on UPlayerProfileFollowBtn_C");
static_assert(offsetof(UPlayerProfileFollowBtn_C, UberGraphFrame) == 0x000278, "Member 'UPlayerProfileFollowBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerProfileFollowBtn_C, BtnFollow) == 0x000280, "Member 'UPlayerProfileFollowBtn_C::BtnFollow' has a wrong offset!");
static_assert(offsetof(UPlayerProfileFollowBtn_C, TxtFollow) == 0x000288, "Member 'UPlayerProfileFollowBtn_C::TxtFollow' has a wrong offset!");
static_assert(offsetof(UPlayerProfileFollowBtn_C, bFollow) == 0x000290, "Member 'UPlayerProfileFollowBtn_C::bFollow' has a wrong offset!");
static_assert(offsetof(UPlayerProfileFollowBtn_C, EventClicked) == 0x000298, "Member 'UPlayerProfileFollowBtn_C::EventClicked' has a wrong offset!");
static_assert(offsetof(UPlayerProfileFollowBtn_C, bMouseOverlap) == 0x0002A8, "Member 'UPlayerProfileFollowBtn_C::bMouseOverlap' has a wrong offset!");
static_assert(offsetof(UPlayerProfileFollowBtn_C, bFriend) == 0x0002A9, "Member 'UPlayerProfileFollowBtn_C::bFriend' has a wrong offset!");
static_assert(offsetof(UPlayerProfileFollowBtn_C, bDoneSend) == 0x0002AA, "Member 'UPlayerProfileFollowBtn_C::bDoneSend' has a wrong offset!");
static_assert(offsetof(UPlayerProfileFollowBtn_C, bCanSend) == 0x0002AB, "Member 'UPlayerProfileFollowBtn_C::bCanSend' has a wrong offset!");

}

