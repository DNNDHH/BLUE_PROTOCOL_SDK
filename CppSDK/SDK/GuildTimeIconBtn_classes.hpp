#pragma once

 

// Package: GuildTimeIconBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildTimeIconBtn.GuildTimeIconBtn_C
// 0x0540 (0x07B8 - 0x0278)
class UGuildTimeIconBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Time;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgSelected;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchEdit;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeIcon;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBGuildActivityTime                          Time;                                              // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_543A[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TimeText;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bSelected;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_543B[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           StyleNomal;                                        // 0x02C8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           StyleSelected;                                     // 0x0540(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GuildTimeIconBtn(int32 EntryPoint);
	void BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GuildTimeIconBtn_Btn_Time_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Set_Editable(bool bEditable);
	void BndEvt__Btn_Time_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitializeTime();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_456EB643467351B1ABBF91877B36AC98(class UObject* Loaded);
	void IsCheck(bool* Param_IsCheck);
	void GetTime(ESBGuildActivityTime* Param_Time);
	void Set_Checked(bool bIsChecked);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildTimeIconBtn_C">();
	}
	static class UGuildTimeIconBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildTimeIconBtn_C>();
	}
};
static_assert(alignof(UGuildTimeIconBtn_C) == 0x000008, "Wrong alignment on UGuildTimeIconBtn_C");
static_assert(sizeof(UGuildTimeIconBtn_C) == 0x0007B8, "Wrong size on UGuildTimeIconBtn_C");
static_assert(offsetof(UGuildTimeIconBtn_C, UberGraphFrame) == 0x000278, "Member 'UGuildTimeIconBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, Btn_Time) == 0x000280, "Member 'UGuildTimeIconBtn_C::Btn_Time' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, CanvasPanel_0) == 0x000288, "Member 'UGuildTimeIconBtn_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, ImgSelected) == 0x000290, "Member 'UGuildTimeIconBtn_C::ImgSelected' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, SwitchEdit) == 0x000298, "Member 'UGuildTimeIconBtn_C::SwitchEdit' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, TimeIcon) == 0x0002A0, "Member 'UGuildTimeIconBtn_C::TimeIcon' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, Time) == 0x0002A8, "Member 'UGuildTimeIconBtn_C::Time' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, TimeText) == 0x0002B0, "Member 'UGuildTimeIconBtn_C::TimeText' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, bSelected) == 0x0002C0, "Member 'UGuildTimeIconBtn_C::bSelected' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, StyleNomal) == 0x0002C8, "Member 'UGuildTimeIconBtn_C::StyleNomal' has a wrong offset!");
static_assert(offsetof(UGuildTimeIconBtn_C, StyleSelected) == 0x000540, "Member 'UGuildTimeIconBtn_C::StyleSelected' has a wrong offset!");

}

