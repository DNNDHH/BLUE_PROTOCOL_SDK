#pragma once

 

// Package: MapWidget_VisitedMapList2Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C
// 0x0090 (0x0308 - 0x0278)
class UMapWidget_VisitedMapList2Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmCharaIcon;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               CharaIconPanel;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG_Eff;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ListButton;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapImage;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapNameText;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OnMapIcon;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 MapId;                                             // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              MapImageTexture;                                   // 0x02D8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    CachedToolTipWidget;                               // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(const class FString& InMapId);
	void ExecuteUbergraph_MapWidget_VisitedMapList2Item(int32 EntryPoint);
	void BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Setup(const class FString& InMapId, bool InCurrentMap);
	void ChangeFaceIconTexture(class UTexture2DDynamic* Texture);
	void Get_Map_Zone_String(int32 Param_Index, class FString* OutString);
	class UWidget* Get_ListButton_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_VisitedMapList2Item_C">();
	}
	static class UMapWidget_VisitedMapList2Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_VisitedMapList2Item_C>();
	}
};
static_assert(alignof(UMapWidget_VisitedMapList2Item_C) == 0x000008, "Wrong alignment on UMapWidget_VisitedMapList2Item_C");
static_assert(sizeof(UMapWidget_VisitedMapList2Item_C) == 0x000308, "Wrong size on UMapWidget_VisitedMapList2Item_C");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_VisitedMapList2Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, AnmCharaIcon) == 0x000280, "Member 'UMapWidget_VisitedMapList2Item_C::AnmCharaIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, CharaIconPanel) == 0x000288, "Member 'UMapWidget_VisitedMapList2Item_C::CharaIconPanel' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, IconBG_Eff) == 0x000290, "Member 'UMapWidget_VisitedMapList2Item_C::IconBG_Eff' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, ListButton) == 0x000298, "Member 'UMapWidget_VisitedMapList2Item_C::ListButton' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, MapImage) == 0x0002A0, "Member 'UMapWidget_VisitedMapList2Item_C::MapImage' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, MapNameText) == 0x0002A8, "Member 'UMapWidget_VisitedMapList2Item_C::MapNameText' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, OnMapIcon) == 0x0002B0, "Member 'UMapWidget_VisitedMapList2Item_C::OnMapIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, OnClicked) == 0x0002B8, "Member 'UMapWidget_VisitedMapList2Item_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, MapId) == 0x0002C8, "Member 'UMapWidget_VisitedMapList2Item_C::MapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, MapImageTexture) == 0x0002D8, "Member 'UMapWidget_VisitedMapList2Item_C::MapImageTexture' has a wrong offset!");
static_assert(offsetof(UMapWidget_VisitedMapList2Item_C, CachedToolTipWidget) == 0x000300, "Member 'UMapWidget_VisitedMapList2Item_C::CachedToolTipWidget' has a wrong offset!");

}

