#pragma once

 

// Package: OtherPCListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OtherPCListItem.OtherPCListItem_C
// 0x0060 (0x02D8 - 0x0278)
class UOtherPCListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerNameText;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTensionTagIcon_C*                      TensionTagIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   PlayerName;                                        // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ListId;                                            // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4C4C[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         PlayerState;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharacterId;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClick__DelegateSignature(int32 ListIndex);
	void ExecuteUbergraph_OtherPCListItem(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Set_Info(const class FString& Param_Name, ESBTensionTagType TensionTag, class ASBPlayerState* OtherPlayerState);
	void SetEnable(bool bEnable);
	void GetPlayerState(class ASBPlayerState** OutPlayerState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OtherPCListItem_C">();
	}
	static class UOtherPCListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOtherPCListItem_C>();
	}
};
static_assert(alignof(UOtherPCListItem_C) == 0x000008, "Wrong alignment on UOtherPCListItem_C");
static_assert(sizeof(UOtherPCListItem_C) == 0x0002D8, "Wrong size on UOtherPCListItem_C");
static_assert(offsetof(UOtherPCListItem_C, UberGraphFrame) == 0x000278, "Member 'UOtherPCListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOtherPCListItem_C, Btn1) == 0x000280, "Member 'UOtherPCListItem_C::Btn1' has a wrong offset!");
static_assert(offsetof(UOtherPCListItem_C, PlayerNameText) == 0x000288, "Member 'UOtherPCListItem_C::PlayerNameText' has a wrong offset!");
static_assert(offsetof(UOtherPCListItem_C, TensionTagIcon) == 0x000290, "Member 'UOtherPCListItem_C::TensionTagIcon' has a wrong offset!");
static_assert(offsetof(UOtherPCListItem_C, OnClick) == 0x000298, "Member 'UOtherPCListItem_C::OnClick' has a wrong offset!");
static_assert(offsetof(UOtherPCListItem_C, PlayerName) == 0x0002A8, "Member 'UOtherPCListItem_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UOtherPCListItem_C, ListId) == 0x0002C0, "Member 'UOtherPCListItem_C::ListId' has a wrong offset!");
static_assert(offsetof(UOtherPCListItem_C, PlayerState) == 0x0002C8, "Member 'UOtherPCListItem_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UOtherPCListItem_C, CharacterId) == 0x0002D0, "Member 'UOtherPCListItem_C::CharacterId' has a wrong offset!");

}

