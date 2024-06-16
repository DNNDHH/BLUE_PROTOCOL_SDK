#pragma once

 

// Package: HistoryWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HistoryWindow.HistoryWindow_C
// 0x01D8 (0x0488 - 0x02B0)
class UHistoryWindow_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoop;                                          // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHistory_Currency_C*                    BP_Currency;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            BtnAnnounce;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            BtnCancel;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           BtnExit;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnRequest;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBox_Count;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBox_Month;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBox_Year;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHistory_Item_C*                        History_Item;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHistory_Item_C*                        History_Item_1;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHistory_Item_C*                        History_Item_2;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           HistoryList;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_228;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           InputBlocker;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Amount;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Date;                                        // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Event;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Title_Bp;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Title_Ro;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchList;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_DeleteAnnounce;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Notice;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequest;                                         // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NowYear;                                           // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowMonth;                                          // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefYear;                                           // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefMonth;                                          // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectID_Year;                                     // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectID_Month;                                    // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectID_Count;                                    // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectNum_Year;                                    // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectNum_Month;                                   // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectNum_Count;                                   // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 List_Year;                                         // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 List_Month;                                        // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 List_Count;                                        // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 List_Count_Def;                                    // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxID_Year;                                        // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxID_Month;                                       // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInitialize;                                      // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsResetting;                                       // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4195[0x6];                                     // 0x041A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCashHistory>                 Dummy_array;                                       // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBHistoryType                                HistoryType;                                       // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4196[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHistory_DeleteAnnounce_C*              Announce;                                          // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRequestDel;                                      // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ExpiredFree;                                       // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpiredPaid;                                       // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              ExpiredDate;                                       // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSBHistoryExpired                      HistoryExpiredData;                                // 0x0460(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void OnRequest__DelegateSignature(ESBHistoryType Type, int32 Year, int32 Month, int32 Count);
	void OnRequestDel__DelegateSignature(ESBHistoryType Type);
	void ExecuteUbergraph_HistoryWindow(int32 EntryPoint);
	void SetExpiredData(const struct FSBHistoryExpired& Data);
	void ShowMessageDialog_Event(const class FText& Text);
	void ShowWindow_DeleteAnnounce();
	void OnEsc();
	void OnClosed_Announce();
	void BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Construct();
	void Show(ESBHistoryType Param_HistoryType);
	void Hide();
	void Init();
	void Init_MonthComboBox();
	void Init_YearComboBox();
	void Init_CountComboBox();
	void Create_MonthComboBox(int32 First, int32 Last);
	void CreateHistoryList(TArray<struct FSBCashHistory>& List);
	class UWidget* On_ComboBox_Year_GenerateWidget_0(const class FString& Item);
	class UWidget* On_ComboBox_Month_GenerateWidget_0(const class FString& Item);
	class UWidget* On_ComboBox_Count_GenerateWidget_0(const class FString& Item);
	void SetUIBlocker(bool bLock);
	void GetRequestDate_DeleteAnnounce();
	void FixExpired(const struct FSBHistoryExpired& Data);
	void CanInput(bool* Ok);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HistoryWindow_C">();
	}
	static class UHistoryWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHistoryWindow_C>();
	}
};
static_assert(alignof(UHistoryWindow_C) == 0x000008, "Wrong alignment on UHistoryWindow_C");
static_assert(sizeof(UHistoryWindow_C) == 0x000488, "Wrong size on UHistoryWindow_C");
static_assert(offsetof(UHistoryWindow_C, UberGraphFrame) == 0x0002B0, "Member 'UHistoryWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, AnimLoop) == 0x0002B8, "Member 'UHistoryWindow_C::AnimLoop' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, AnimOut) == 0x0002C0, "Member 'UHistoryWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, AnimIn) == 0x0002C8, "Member 'UHistoryWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, BP_Currency) == 0x0002D0, "Member 'UHistoryWindow_C::BP_Currency' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, BtnAnnounce) == 0x0002D8, "Member 'UHistoryWindow_C::BtnAnnounce' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, BtnCancel) == 0x0002E0, "Member 'UHistoryWindow_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, BtnExit) == 0x0002E8, "Member 'UHistoryWindow_C::BtnExit' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, BtnRequest) == 0x0002F0, "Member 'UHistoryWindow_C::BtnRequest' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, ComboBox_Count) == 0x0002F8, "Member 'UHistoryWindow_C::ComboBox_Count' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, ComboBox_Month) == 0x000300, "Member 'UHistoryWindow_C::ComboBox_Month' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, ComboBox_Year) == 0x000308, "Member 'UHistoryWindow_C::ComboBox_Year' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, History_Item) == 0x000310, "Member 'UHistoryWindow_C::History_Item' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, History_Item_1) == 0x000318, "Member 'UHistoryWindow_C::History_Item_1' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, History_Item_2) == 0x000320, "Member 'UHistoryWindow_C::History_Item_2' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, HistoryList) == 0x000328, "Member 'UHistoryWindow_C::HistoryList' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Image_228) == 0x000330, "Member 'UHistoryWindow_C::Image_228' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, InputBlocker) == 0x000338, "Member 'UHistoryWindow_C::InputBlocker' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Label_Amount) == 0x000340, "Member 'UHistoryWindow_C::Label_Amount' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Label_Date) == 0x000348, "Member 'UHistoryWindow_C::Label_Date' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Label_Event) == 0x000350, "Member 'UHistoryWindow_C::Label_Event' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Label_Title_Bp) == 0x000358, "Member 'UHistoryWindow_C::Label_Title_Bp' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Label_Title_Ro) == 0x000360, "Member 'UHistoryWindow_C::Label_Title_Ro' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, SwitchList) == 0x000368, "Member 'UHistoryWindow_C::SwitchList' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, SwitchType) == 0x000370, "Member 'UHistoryWindow_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Txt_DeleteAnnounce) == 0x000378, "Member 'UHistoryWindow_C::Txt_DeleteAnnounce' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Txt_Notice) == 0x000380, "Member 'UHistoryWindow_C::Txt_Notice' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, OnClose) == 0x000388, "Member 'UHistoryWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, OnRequest) == 0x000398, "Member 'UHistoryWindow_C::OnRequest' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, NowYear) == 0x0003A8, "Member 'UHistoryWindow_C::NowYear' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, NowMonth) == 0x0003AC, "Member 'UHistoryWindow_C::NowMonth' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, DefYear) == 0x0003B0, "Member 'UHistoryWindow_C::DefYear' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, DefMonth) == 0x0003B4, "Member 'UHistoryWindow_C::DefMonth' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, SelectID_Year) == 0x0003B8, "Member 'UHistoryWindow_C::SelectID_Year' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, SelectID_Month) == 0x0003BC, "Member 'UHistoryWindow_C::SelectID_Month' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, SelectID_Count) == 0x0003C0, "Member 'UHistoryWindow_C::SelectID_Count' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, SelectNum_Year) == 0x0003C4, "Member 'UHistoryWindow_C::SelectNum_Year' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, SelectNum_Month) == 0x0003C8, "Member 'UHistoryWindow_C::SelectNum_Month' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, SelectNum_Count) == 0x0003CC, "Member 'UHistoryWindow_C::SelectNum_Count' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, List_Year) == 0x0003D0, "Member 'UHistoryWindow_C::List_Year' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, List_Month) == 0x0003E0, "Member 'UHistoryWindow_C::List_Month' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, List_Count) == 0x0003F0, "Member 'UHistoryWindow_C::List_Count' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, List_Count_Def) == 0x000400, "Member 'UHistoryWindow_C::List_Count_Def' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, MaxID_Year) == 0x000410, "Member 'UHistoryWindow_C::MaxID_Year' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, MaxID_Month) == 0x000414, "Member 'UHistoryWindow_C::MaxID_Month' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, IsInitialize) == 0x000418, "Member 'UHistoryWindow_C::IsInitialize' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, IsResetting) == 0x000419, "Member 'UHistoryWindow_C::IsResetting' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Dummy_array) == 0x000420, "Member 'UHistoryWindow_C::Dummy_array' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, HistoryType) == 0x000430, "Member 'UHistoryWindow_C::HistoryType' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, Announce) == 0x000438, "Member 'UHistoryWindow_C::Announce' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, OnRequestDel) == 0x000440, "Member 'UHistoryWindow_C::OnRequestDel' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, ExpiredFree) == 0x000450, "Member 'UHistoryWindow_C::ExpiredFree' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, ExpiredPaid) == 0x000454, "Member 'UHistoryWindow_C::ExpiredPaid' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, ExpiredDate) == 0x000458, "Member 'UHistoryWindow_C::ExpiredDate' has a wrong offset!");
static_assert(offsetof(UHistoryWindow_C, HistoryExpiredData) == 0x000460, "Member 'UHistoryWindow_C::HistoryExpiredData' has a wrong offset!");

}

