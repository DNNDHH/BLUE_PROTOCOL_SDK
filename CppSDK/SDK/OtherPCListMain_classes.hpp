#pragma once

 

// Package: OtherPCListMain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OtherPCListMain.OtherPCListMain_C
// 0x0070 (0x0320 - 0x02B0)
class UOtherPCListMain_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_List;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PlayerList;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                UpdateButton;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBChatLogType                                SeachType;                                         // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C53[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectListId;                                      // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUpdateWait;                                      // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C54[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BLSeverCheckCount;                                 // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnListSelected;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickUpdateButton;                               // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnListUpdated;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIncludeSelf;                                      // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableLostPlayerData;                             // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsPSOnlyDiff;                                      // 0x031A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnListSelected__DelegateSignature(class ASBPlayerState* PlayerState, class FName CharacterId);
	void OnClickUpdateButton__DelegateSignature();
	void OnListUpdated__DelegateSignature();
	void ExecuteUbergraph_OtherPCListMain(int32 EntryPoint);
	void OnEventListSelectedMain(int32 ListIndex, bool bOnlyListUpdate);
	void Update();
	void MoveCursorPositionToList(class UWidget* Widget);
	void EndUpdateAnim();
	void StartUpdateAnim(bool IsLoop);
	void OnIsBlackListed_event_0(const bool bIsBlackListed);
	void BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnEventListSelected(int32 ListIndex);
	void Open();
	void Destruct();
	void Construct();
	void UpdatePlayerList();
	void ResetSelectList();
	void Search_Player_List(class APlayerState* InPlayerState, int32* MatchistID);
	void SelectPlayer(class APlayerState* InPlayerState, bool bOnlyListUpdate);
	void GetOwningSbPlayerState(class ASBPlayerState** Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OtherPCListMain_C">();
	}
	static class UOtherPCListMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOtherPCListMain_C>();
	}
};
static_assert(alignof(UOtherPCListMain_C) == 0x000008, "Wrong alignment on UOtherPCListMain_C");
static_assert(sizeof(UOtherPCListMain_C) == 0x000320, "Wrong size on UOtherPCListMain_C");
static_assert(offsetof(UOtherPCListMain_C, UberGraphFrame) == 0x0002B0, "Member 'UOtherPCListMain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, CanvasPanel_List) == 0x0002B8, "Member 'UOtherPCListMain_C::CanvasPanel_List' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, CmnImageThrobber) == 0x0002C0, "Member 'UOtherPCListMain_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, PlayerList) == 0x0002C8, "Member 'UOtherPCListMain_C::PlayerList' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, UpdateButton) == 0x0002D0, "Member 'UOtherPCListMain_C::UpdateButton' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, SeachType) == 0x0002D8, "Member 'UOtherPCListMain_C::SeachType' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, SelectListId) == 0x0002DC, "Member 'UOtherPCListMain_C::SelectListId' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, IsUpdateWait) == 0x0002E0, "Member 'UOtherPCListMain_C::IsUpdateWait' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, BLSeverCheckCount) == 0x0002E4, "Member 'UOtherPCListMain_C::BLSeverCheckCount' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, OnListSelected) == 0x0002E8, "Member 'UOtherPCListMain_C::OnListSelected' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, OnClickUpdateButton) == 0x0002F8, "Member 'UOtherPCListMain_C::OnClickUpdateButton' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, OnListUpdated) == 0x000308, "Member 'UOtherPCListMain_C::OnListUpdated' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, bIncludeSelf) == 0x000318, "Member 'UOtherPCListMain_C::bIncludeSelf' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, bEnableLostPlayerData) == 0x000319, "Member 'UOtherPCListMain_C::bEnableLostPlayerData' has a wrong offset!");
static_assert(offsetof(UOtherPCListMain_C, IsPSOnlyDiff) == 0x00031A, "Member 'UOtherPCListMain_C::IsPSOnlyDiff' has a wrong offset!");

}

