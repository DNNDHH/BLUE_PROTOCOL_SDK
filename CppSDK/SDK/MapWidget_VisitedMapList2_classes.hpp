#pragma once

 

// Package: MapWidget_VisitedMapList2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C
// 0x0080 (0x0330 - 0x02B0)
class UMapWidget_VisitedMapList2_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CloseAnimation;                                    // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OpenAnimation;                                     // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBasicPager_C*                          BasicPager;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CPPage;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanel;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnListItemClicked;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         MapIds;                                            // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 CurrentMapId;                                      // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         ViewPage;                                          // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPage;                                           // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnListItemClicked__DelegateSignature(const class FString& InMapId);
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_MapWidget_VisitedMapList2(int32 EntryPoint);
	void Construct();
	void BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature(int32 Page);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnPress_Cancel();
	void Destruct();
	void OnListItemClickedEvent(const class FString& InMapId);
	void UnbindListItem(class UMapWidget_VisitedMapList2Item_C* Target);
	void BindListItem(class UMapWidget_VisitedMapList2Item_C* Target);
	void Open();
	void Close();
	void SetupListItem();
	void ResetListItem();
	void Setup(TArray<class FString>& InMapIds, const class FString& InCurrentId);
	void PageChange(int32 Page);
	void ChangeFaceImageTexture(class UTexture2DDynamic* Texture);

	int32 GetViewCount() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_VisitedMapList2_C">();
	}
	static class UMapWidget_VisitedMapList2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_VisitedMapList2_C>();
	}
};
static_assert(alignof(UMapWidget_VisitedMapList2_C) == 0x000008, "Wrong alignment on UMapWidget_VisitedMapList2_C");
static_assert(sizeof(UMapWidget_VisitedMapList2_C) == 0x000330, "Wrong size on UMapWidget_VisitedMapList2_C");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, UberGraphFrame) == 0x0002B0, "Member 'UMapWidget_VisitedMapList2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, CloseAnimation) == 0x0002B8, "Member 'UMapWidget_VisitedMapList2_C::CloseAnimation' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, OpenAnimation) == 0x0002C0, "Member 'UMapWidget_VisitedMapList2_C::OpenAnimation' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, BasicPager) == 0x0002C8, "Member 'UMapWidget_VisitedMapList2_C::BasicPager' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, BtnScreen) == 0x0002D0, "Member 'UMapWidget_VisitedMapList2_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, CPPage) == 0x0002D8, "Member 'UMapWidget_VisitedMapList2_C::CPPage' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, UniformGridPanel) == 0x0002E0, "Member 'UMapWidget_VisitedMapList2_C::UniformGridPanel' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, OnListItemClicked) == 0x0002E8, "Member 'UMapWidget_VisitedMapList2_C::OnListItemClicked' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, OnClose) == 0x0002F8, "Member 'UMapWidget_VisitedMapList2_C::OnClose' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, MapIds) == 0x000308, "Member 'UMapWidget_VisitedMapList2_C::MapIds' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, CurrentMapId) == 0x000318, "Member 'UMapWidget_VisitedMapList2_C::CurrentMapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, ViewPage) == 0x000328, "Member 'UMapWidget_VisitedMapList2_C::ViewPage' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2_C, MaxPage) == 0x00032C, "Member 'UMapWidget_VisitedMapList2_C::MaxPage' has a wrong offset!");

}

