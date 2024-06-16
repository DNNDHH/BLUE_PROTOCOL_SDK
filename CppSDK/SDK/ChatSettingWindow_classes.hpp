#pragma once

 

// Package: ChatSettingWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatSettingWindow.ChatSettingWindow_C
// 0x00B8 (0x0330 - 0x0278)
class UChatSettingWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UChatSettingRadioBtn_C*                 ChatSettingRadioBtn_LogDispTime;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatSettingRadioBtn_C*                 ChatSettingRadioBtn_Main;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatSettingRadioBtn_C*                 ChatSettingRadioBtn_Size;                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatSettingRadioBtn_C*                 ChatSettingRadioBtn_StartKey;                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatSettingRadioBtn_C*                 ChatSettingRadioBtn_Sub1;                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatSettingRadioBtn_C*                 ChatSettingRadioBtn_Sub2;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_146;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Info_1;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Info_2;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Enter;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bInAnime;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EE6[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBChatLogWindowStatusSave>     LogWindowStatusList;                               // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnRefreshChatLogs;                                 // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSaveFlag;                                        // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EE7[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLogDispTime;                                     // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void OnRefreshChatLogs__DelegateSignature();
	void OnLogDispTime__DelegateSignature();
	void ExecuteUbergraph_ChatSettingWindow(int32 EntryPoint);
	void BndEvt__UnreadNotifySettingWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0();
	void OnChange_Sub2(int32 InSelectBtnId);
	void OnChange_Sub1(int32 InSelectBtnId);
	void OnChange_Main(int32 InSelectBtnId);
	void OnChange_StartKey(int32 InSelectBtnId);
	void OnChange_Time(int32 InSelectBtnId);
	void OnChange_Size(int32 InSelectBtnId);
	void Destruct();
	void Construct();
	void Close();
	void ShowWindow(TArray<bool>& LogVisibleStatusList);
	void HideWindow();
	void SetVisible(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatSettingWindow_C">();
	}
	static class UChatSettingWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatSettingWindow_C>();
	}
};
static_assert(alignof(UChatSettingWindow_C) == 0x000008, "Wrong alignment on UChatSettingWindow_C");
static_assert(sizeof(UChatSettingWindow_C) == 0x000330, "Wrong size on UChatSettingWindow_C");
static_assert(offsetof(UChatSettingWindow_C, UberGraphFrame) == 0x000278, "Member 'UChatSettingWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, AnimInOut) == 0x000280, "Member 'UChatSettingWindow_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, ChatSettingRadioBtn_LogDispTime) == 0x000288, "Member 'UChatSettingWindow_C::ChatSettingRadioBtn_LogDispTime' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, ChatSettingRadioBtn_Main) == 0x000290, "Member 'UChatSettingWindow_C::ChatSettingRadioBtn_Main' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, ChatSettingRadioBtn_Size) == 0x000298, "Member 'UChatSettingWindow_C::ChatSettingRadioBtn_Size' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, ChatSettingRadioBtn_StartKey) == 0x0002A0, "Member 'UChatSettingWindow_C::ChatSettingRadioBtn_StartKey' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, ChatSettingRadioBtn_Sub1) == 0x0002A8, "Member 'UChatSettingWindow_C::ChatSettingRadioBtn_Sub1' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, ChatSettingRadioBtn_Sub2) == 0x0002B0, "Member 'UChatSettingWindow_C::ChatSettingRadioBtn_Sub2' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, CmnClose02) == 0x0002B8, "Member 'UChatSettingWindow_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, Image_146) == 0x0002C0, "Member 'UChatSettingWindow_C::Image_146' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, Info_1) == 0x0002C8, "Member 'UChatSettingWindow_C::Info_1' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, Info_2) == 0x0002D0, "Member 'UChatSettingWindow_C::Info_2' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, Text_Enter) == 0x0002D8, "Member 'UChatSettingWindow_C::Text_Enter' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, bInAnime) == 0x0002E0, "Member 'UChatSettingWindow_C::bInAnime' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, OnClose) == 0x0002E8, "Member 'UChatSettingWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, LogWindowStatusList) == 0x0002F8, "Member 'UChatSettingWindow_C::LogWindowStatusList' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, OnRefreshChatLogs) == 0x000308, "Member 'UChatSettingWindow_C::OnRefreshChatLogs' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, IsSaveFlag) == 0x000318, "Member 'UChatSettingWindow_C::IsSaveFlag' has a wrong offset!");
static_assert(offsetof(UChatSettingWindow_C, OnLogDispTime) == 0x000320, "Member 'UChatSettingWindow_C::OnLogDispTime' has a wrong offset!");

}

