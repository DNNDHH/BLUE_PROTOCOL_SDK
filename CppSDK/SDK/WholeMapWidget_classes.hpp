#pragma once

 

// Package: WholeMapWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WholeMapWidget.WholeMapWidget_C
// 0x0048 (0x0400 - 0x03B8)
class UWholeMapWidget_C final : public USBWholeMap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMapTraverseList_C*                     MapTraverseList;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapEditWindow_C*                       EditWindow;                                        // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOpenEditWindow;                                  // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCloseEditWindow;                                 // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnOpenEditWindow__DelegateSignature();
	void OnCloseEditWindow__DelegateSignature();
	void ExecuteUbergraph_WholeMapWidget(int32 EntryPoint);
	void LoadBG();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void UnbindEdit();
	void BindEdit();
	void OnPinChecked(bool IsChecked);
	void OnOutAnim();
	void OnInAnim();
	void OnReset();
	void CloseEditWindow();
	void OnWindowSizeChanged(int32 Number);
	void OnIconSizeChanged(float Value);
	void OnBGAlphaChanged(float Value);
	void OnZoom(float Zoom);
	void OpenEditWindow();
	void UpdateTraverse(const int32 RetCode);
	void UnbindTraverseDelegate();
	void BindTraverseDelegate();
	void UnbindVisibleSettingChangeDelegate();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void BindVisibleSettingChangeDelegate();
	void OnLoaded_2CCDB2684036170C3D919597C7222B2A(class UObject* Loaded);
	void OnBind();
	void OnUnbind();
	void OnCreateWholeMapEditWindow();
	void OnDeleteWholeMapEditWindow();
	void OnSetOptionEditMode();
	void PlayAnimIn();
	void PlayAnimOut();
	void OnOpen();
	void SetDebugTraverseList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WholeMapWidget_C">();
	}
	static class UWholeMapWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWholeMapWidget_C>();
	}
};
static_assert(alignof(UWholeMapWidget_C) == 0x000008, "Wrong alignment on UWholeMapWidget_C");
static_assert(sizeof(UWholeMapWidget_C) == 0x000400, "Wrong size on UWholeMapWidget_C");
static_assert(offsetof(UWholeMapWidget_C, UberGraphFrame) == 0x0003B8, "Member 'UWholeMapWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWholeMapWidget_C, Out) == 0x0003C0, "Member 'UWholeMapWidget_C::Out' has a wrong offset!");
static_assert(offsetof(UWholeMapWidget_C, In) == 0x0003C8, "Member 'UWholeMapWidget_C::In' has a wrong offset!");
static_assert(offsetof(UWholeMapWidget_C, MapTraverseList) == 0x0003D0, "Member 'UWholeMapWidget_C::MapTraverseList' has a wrong offset!");
static_assert(offsetof(UWholeMapWidget_C, EditWindow) == 0x0003D8, "Member 'UWholeMapWidget_C::EditWindow' has a wrong offset!");
static_assert(offsetof(UWholeMapWidget_C, OnOpenEditWindow) == 0x0003E0, "Member 'UWholeMapWidget_C::OnOpenEditWindow' has a wrong offset!");
static_assert(offsetof(UWholeMapWidget_C, OnCloseEditWindow) == 0x0003F0, "Member 'UWholeMapWidget_C::OnCloseEditWindow' has a wrong offset!");

}

