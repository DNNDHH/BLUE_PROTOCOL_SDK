#pragma once

 

// Package: RewardPlusCountTicketInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RewardPlusCountTicketInfo.RewardPlusCountTicketInfo_C
// 0x0050 (0x02C8 - 0x0278)
class URewardPlusCountTicketInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            CmnBtn16Ticket;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_85;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSeparation;                                   // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_CmnBtn16Ticket;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextCountValueCurrent;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextCountValueLimit;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextTicketValue;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Fixed_C*       ToolTip;                                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPaidPlan;                                        // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74B3[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IncRewardPlus;                                     // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RewardPlusCountTicketInfo(int32 EntryPoint);
	void OnRecoverRewardPlusCount(ESBRecoverRewardPlusCountResult Result);
	void BndEvt__RewardPlusCountTicketInfo_CmnBtn16Ticket_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void SetCountValueCurrent();
	void SetCountValueLimit();
	void SetTicketValue();
	void SetColorRedIfZero(class UTextBlock* Text, int32 Value);
	class UWidget* Get_ImageTicketIcon_ToolTipWidget_0();
	void SetHUDMode();
	class UWidget* Get_ImageSeparation_ToolTipWidget_0();
	void SetupToolTip();
	void SetEnableBtn16Ticket();
	void GetCountValueLimit(int32* CountValueLimit);
	void UpdateValue();
	void UpdateSeasonPassInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardPlusCountTicketInfo_C">();
	}
	static class URewardPlusCountTicketInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URewardPlusCountTicketInfo_C>();
	}
};
static_assert(alignof(URewardPlusCountTicketInfo_C) == 0x000008, "Wrong alignment on URewardPlusCountTicketInfo_C");
static_assert(sizeof(URewardPlusCountTicketInfo_C) == 0x0002C8, "Wrong size on URewardPlusCountTicketInfo_C");
static_assert(offsetof(URewardPlusCountTicketInfo_C, UberGraphFrame) == 0x000278, "Member 'URewardPlusCountTicketInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, CmnBtn16Ticket) == 0x000280, "Member 'URewardPlusCountTicketInfo_C::CmnBtn16Ticket' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, Image_85) == 0x000288, "Member 'URewardPlusCountTicketInfo_C::Image_85' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, ImageSeparation) == 0x000290, "Member 'URewardPlusCountTicketInfo_C::ImageSeparation' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, SizeBox_CmnBtn16Ticket) == 0x000298, "Member 'URewardPlusCountTicketInfo_C::SizeBox_CmnBtn16Ticket' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, TextCountValueCurrent) == 0x0002A0, "Member 'URewardPlusCountTicketInfo_C::TextCountValueCurrent' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, TextCountValueLimit) == 0x0002A8, "Member 'URewardPlusCountTicketInfo_C::TextCountValueLimit' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, TextTicketValue) == 0x0002B0, "Member 'URewardPlusCountTicketInfo_C::TextTicketValue' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, ToolTip) == 0x0002B8, "Member 'URewardPlusCountTicketInfo_C::ToolTip' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, IsPaidPlan) == 0x0002C0, "Member 'URewardPlusCountTicketInfo_C::IsPaidPlan' has a wrong offset!");
static_assert(offsetof(URewardPlusCountTicketInfo_C, IncRewardPlus) == 0x0002C4, "Member 'URewardPlusCountTicketInfo_C::IncRewardPlus' has a wrong offset!");

}

