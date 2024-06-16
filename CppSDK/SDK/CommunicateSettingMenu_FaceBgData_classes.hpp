#pragma once

 

// Package: CommunicateSettingMenu_FaceBgData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C
// 0x00A8 (0x0320 - 0x0278)
class UCommunicateSettingMenu_FaceBgData_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AdventerRankBg;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           AdventurerRank;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CharacterDecoFrame;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_ClassData_C*    CommunicateSettingMenu_ClassData;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_FaceBg_C*       CommunicateSettingMenu_FaceBg;                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TotalPowerGrp;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAdventurerRank;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTotalPower;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    UserName;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ClickedBtnAwardItemIconList;                       // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsAdventurerRankAndTotalPowerVisible;             // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_8CAA[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickEvent;                                      // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsCharacterCard;                                  // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8CAB[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHover;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhover;                                         // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ClickedBtnAwardItemIconList__DelegateSignature(int32 AwardId);
	void OnClickEvent__DelegateSignature();
	void OnHover__DelegateSignature();
	void OnUnhover__DelegateSignature();
	void ExecuteUbergraph_CommunicateSettingMenu_FaceBgData(int32 EntryPoint);
	void Construct();
	void SetAwardId(const TArray<int32>& InAwardIdList);
	void EditFrame_AwardIconDisable();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature(int32 AwardId);
	void SetFrame(int32 InCharacterCardFrameId);
	void ErrorDataSet();
	void SetAdventureRankText(int32 Value);
	void SetClassType(ESBClassType InClassType, const TArray<int32>& InAwardIdList);
	void SetTotalPowerText(int32 Value);
	void SetAdventureData();
	void SetClassData(ESBClassType InCurrentClassType, int32 InClassLevel, const TArray<int32>& InAwardIdList);
	void SetTotalPower();
	void SetAdventureRank();
	void ResetFaceBG();
	void SetFaceBG(float InScale, const struct FVector2D& InPosition, const class FString& URL);
	void BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_6_OnUnhver__DelegateSignature();
	void BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_5_OnHover__DelegateSignature();
	void SetCharacterCardData(const struct FSBPlayerCharacterCardData& InPlayerCharacterCardData, bool bIsUGC);
	void BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_2_OnClickEvent__DelegateSignature();
	void OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7(class UObject* Loaded);
	void SetAdventurerRankAndTotalPowerVisibility(bool bInIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommunicateSettingMenu_FaceBgData_C">();
	}
	static class UCommunicateSettingMenu_FaceBgData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommunicateSettingMenu_FaceBgData_C>();
	}
};
static_assert(alignof(UCommunicateSettingMenu_FaceBgData_C) == 0x000008, "Wrong alignment on UCommunicateSettingMenu_FaceBgData_C");
static_assert(sizeof(UCommunicateSettingMenu_FaceBgData_C) == 0x000320, "Wrong size on UCommunicateSettingMenu_FaceBgData_C");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, UberGraphFrame) == 0x000278, "Member 'UCommunicateSettingMenu_FaceBgData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, AdventerRankBg) == 0x000280, "Member 'UCommunicateSettingMenu_FaceBgData_C::AdventerRankBg' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, AdventurerRank) == 0x000288, "Member 'UCommunicateSettingMenu_FaceBgData_C::AdventurerRank' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, CharacterDecoFrame) == 0x000290, "Member 'UCommunicateSettingMenu_FaceBgData_C::CharacterDecoFrame' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, CommunicateSettingMenu_ClassData) == 0x000298, "Member 'UCommunicateSettingMenu_FaceBgData_C::CommunicateSettingMenu_ClassData' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, CommunicateSettingMenu_FaceBg) == 0x0002A0, "Member 'UCommunicateSettingMenu_FaceBgData_C::CommunicateSettingMenu_FaceBg' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, SBButton) == 0x0002A8, "Member 'UCommunicateSettingMenu_FaceBgData_C::SBButton' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, TotalPowerGrp) == 0x0002B0, "Member 'UCommunicateSettingMenu_FaceBgData_C::TotalPowerGrp' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, TxtAdventurerRank) == 0x0002B8, "Member 'UCommunicateSettingMenu_FaceBgData_C::TxtAdventurerRank' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, TxtTotalPower) == 0x0002C0, "Member 'UCommunicateSettingMenu_FaceBgData_C::TxtTotalPower' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, UserName) == 0x0002C8, "Member 'UCommunicateSettingMenu_FaceBgData_C::UserName' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, ClickedBtnAwardItemIconList) == 0x0002D0, "Member 'UCommunicateSettingMenu_FaceBgData_C::ClickedBtnAwardItemIconList' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, bIsAdventurerRankAndTotalPowerVisible) == 0x0002E0, "Member 'UCommunicateSettingMenu_FaceBgData_C::bIsAdventurerRankAndTotalPowerVisible' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, OnClickEvent) == 0x0002E8, "Member 'UCommunicateSettingMenu_FaceBgData_C::OnClickEvent' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, bIsCharacterCard) == 0x0002F8, "Member 'UCommunicateSettingMenu_FaceBgData_C::bIsCharacterCard' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, OnHover) == 0x000300, "Member 'UCommunicateSettingMenu_FaceBgData_C::OnHover' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBgData_C, OnUnhover) == 0x000310, "Member 'UCommunicateSettingMenu_FaceBgData_C::OnUnhover' has a wrong offset!");

}

