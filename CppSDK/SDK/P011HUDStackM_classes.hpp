#pragma once

 

// Package: P011HUDStackM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P011HUDStackM.P011HUDStackM_C
// 0x0090 (0x0310 - 0x0280)
class UP011HUDStackM_C final : public USBClassHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bar_1;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar_2;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar_3;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar_Bg1;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar_Bg1Eff;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar_Bg2;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar_Bg2Eff;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar_Bg3;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bar_Bg3Eff;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasBar_1;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasBar_2;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasBar_3;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPRoot;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPVisibleSetting;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P011HUDStackM(int32 EntryPoint);
	void UnbindVisibleSetting();
	void OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void BindVisibleSetting();
	void OnBind();
	void OnUnbind();
	void OnInitialize();
	void OnTerminate();
	void OnSetEditMode(bool InIsEdit);
	void PlayAnimForwardInOut();
	void PlayAnimReverseInOut();
	void On_Set_StackM_Value(int32 InStack, float InAccRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P011HUDStackM_C">();
	}
	static class UP011HUDStackM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP011HUDStackM_C>();
	}
};
static_assert(alignof(UP011HUDStackM_C) == 0x000008, "Wrong alignment on UP011HUDStackM_C");
static_assert(sizeof(UP011HUDStackM_C) == 0x000310, "Wrong size on UP011HUDStackM_C");
static_assert(offsetof(UP011HUDStackM_C, UberGraphFrame) == 0x000280, "Member 'UP011HUDStackM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, AnimInOut) == 0x000288, "Member 'UP011HUDStackM_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_1) == 0x000290, "Member 'UP011HUDStackM_C::Bar_1' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_2) == 0x000298, "Member 'UP011HUDStackM_C::Bar_2' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_3) == 0x0002A0, "Member 'UP011HUDStackM_C::Bar_3' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_Bg1) == 0x0002A8, "Member 'UP011HUDStackM_C::Bar_Bg1' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_Bg1Eff) == 0x0002B0, "Member 'UP011HUDStackM_C::Bar_Bg1Eff' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_Bg2) == 0x0002B8, "Member 'UP011HUDStackM_C::Bar_Bg2' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_Bg2Eff) == 0x0002C0, "Member 'UP011HUDStackM_C::Bar_Bg2Eff' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_Bg3) == 0x0002C8, "Member 'UP011HUDStackM_C::Bar_Bg3' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, Bar_Bg3Eff) == 0x0002D0, "Member 'UP011HUDStackM_C::Bar_Bg3Eff' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, CanvasBar_1) == 0x0002D8, "Member 'UP011HUDStackM_C::CanvasBar_1' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, CanvasBar_2) == 0x0002E0, "Member 'UP011HUDStackM_C::CanvasBar_2' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, CanvasBar_3) == 0x0002E8, "Member 'UP011HUDStackM_C::CanvasBar_3' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, CPRoot) == 0x0002F0, "Member 'UP011HUDStackM_C::CPRoot' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, CPVisibleSetting) == 0x0002F8, "Member 'UP011HUDStackM_C::CPVisibleSetting' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, WidgetSwitcher) == 0x000300, "Member 'UP011HUDStackM_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UP011HUDStackM_C, GaugeMat) == 0x000308, "Member 'UP011HUDStackM_C::GaugeMat' has a wrong offset!");

}

