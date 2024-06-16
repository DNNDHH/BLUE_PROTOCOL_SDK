#pragma once

 

// Package: CharacterCardBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ECharacterCardType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterCardBase.CharacterCardBase_C
// 0x0150 (0x03C8 - 0x0278)
class UCharacterCardBase_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CharacterInAnim;                                   // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnMouseAnim;                                       // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BlankImage;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CCardEff;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharacterName;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBOverlay*                             CPReceptionLabel;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_FaceBgData_C*   FaceBgData;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LabelImage;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileLikeBtn_C*                LikeBtn;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URelationshipIconSets_C*                RelationshipIconSet;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ECharacterCardType                            CharacterCardType;                                 // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_480E[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSendLike;                                        // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBPlayerCharacterCardData             CharacterCardData;                                 // 0x0300(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsMe;                                             // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_480F[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    PartyMemberState;                                  // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBlank;                                          // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsInfoHidden;                                     // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsReceptingParticipants;                          // 0x03C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClicked__DelegateSignature(const class FString& InCharacterId, bool bInIsMe);
	void OnSendLike__DelegateSignature();
	void ExecuteUbergraph_CharacterCardBase(int32 EntryPoint);
	void StartNewPartyMemberInAnimation();
	void BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_1_OnUnhover__DelegateSignature();
	void BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_0_OnHover__DelegateSignature();
	void BndEvt__CharacterCardBase_FaceBgData_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature();
	void Destruct();
	void BndEvt__CharacterCardBase_LikeBtn_K2Node_ComponentBoundEvent_2_BtnEventComplete__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetCharacterCardType(ECharacterCardType InType, bool bInIsReceptingParticipants);
	void SetCharacterCardData(const struct FSBPlayerCharacterCardData& InCharacterCardData, bool bInIsMe, class USBPartyMemberState* InPartyMemberState);
	void SetIsBlankCard(bool bInIsBlank);
	void SetIsCardInfoHidden(bool bInIsInfoHidden);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCardBase_C">();
	}
	static class UCharacterCardBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterCardBase_C>();
	}
};
static_assert(alignof(UCharacterCardBase_C) == 0x000008, "Wrong alignment on UCharacterCardBase_C");
static_assert(sizeof(UCharacterCardBase_C) == 0x0003C8, "Wrong size on UCharacterCardBase_C");
static_assert(offsetof(UCharacterCardBase_C, UberGraphFrame) == 0x000278, "Member 'UCharacterCardBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, CharacterInAnim) == 0x000280, "Member 'UCharacterCardBase_C::CharacterInAnim' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, OnMouseAnim) == 0x000288, "Member 'UCharacterCardBase_C::OnMouseAnim' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, BlankImage) == 0x000290, "Member 'UCharacterCardBase_C::BlankImage' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, CCardEff) == 0x000298, "Member 'UCharacterCardBase_C::CCardEff' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, CharacterName) == 0x0002A0, "Member 'UCharacterCardBase_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, CPReceptionLabel) == 0x0002A8, "Member 'UCharacterCardBase_C::CPReceptionLabel' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, FaceBgData) == 0x0002B0, "Member 'UCharacterCardBase_C::FaceBgData' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, LabelImage) == 0x0002B8, "Member 'UCharacterCardBase_C::LabelImage' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, LikeBtn) == 0x0002C0, "Member 'UCharacterCardBase_C::LikeBtn' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, RelationshipIconSet) == 0x0002C8, "Member 'UCharacterCardBase_C::RelationshipIconSet' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, Switcher) == 0x0002D0, "Member 'UCharacterCardBase_C::Switcher' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, OnClicked) == 0x0002D8, "Member 'UCharacterCardBase_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, CharacterCardType) == 0x0002E8, "Member 'UCharacterCardBase_C::CharacterCardType' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, OnSendLike) == 0x0002F0, "Member 'UCharacterCardBase_C::OnSendLike' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, CharacterCardData) == 0x000300, "Member 'UCharacterCardBase_C::CharacterCardData' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, bIsMe) == 0x0003B0, "Member 'UCharacterCardBase_C::bIsMe' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, PartyMemberState) == 0x0003B8, "Member 'UCharacterCardBase_C::PartyMemberState' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, bIsBlank) == 0x0003C0, "Member 'UCharacterCardBase_C::bIsBlank' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, bIsInfoHidden) == 0x0003C1, "Member 'UCharacterCardBase_C::bIsInfoHidden' has a wrong offset!");
static_assert(offsetof(UCharacterCardBase_C, bIsReceptingParticipants) == 0x0003C2, "Member 'UCharacterCardBase_C::bIsReceptingParticipants' has a wrong offset!");

}

