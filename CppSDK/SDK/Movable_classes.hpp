#pragma once

 

// Package: Movable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Movable.Movable_C
// 0x00A0 (0x0318 - 0x0278)
class UMovable_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CenterTextGrp;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Disp;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Gradation;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_94;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Movable;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MovableDesc2;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MovalDesc;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NameGrp;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResizableWidget_C*                     ResizableWidget;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBg1;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBG2;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBG3;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBG4;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TextBGSwitch;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 Widget;                                            // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUserWidget*                            CreatedUserWidget;                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnableDrag;                                       // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEditMode;                                         // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73E2[0x2];                                     // 0x030A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         GradationType;                                     // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Movable(int32 EntryPoint);
	void SetEditMode(bool Param_bEditMode);
	void SetEnableDrag(bool bEditable);
	void PreConstruct(bool IsDesignTime);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void GetWidget(class UUserWidget** Param_CreatedUserWidget);
	void SetResizeableParentWidget(class UUserWidget* InWidget, bool EditMode);
	void UpdateGradationColor();
	void SetDescType(int32 Type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Movable_C">();
	}
	static class UMovable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovable_C>();
	}
};
static_assert(alignof(UMovable_C) == 0x000008, "Wrong alignment on UMovable_C");
static_assert(sizeof(UMovable_C) == 0x000318, "Wrong size on UMovable_C");
static_assert(offsetof(UMovable_C, UberGraphFrame) == 0x000278, "Member 'UMovable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMovable_C, Canvas) == 0x000280, "Member 'UMovable_C::Canvas' has a wrong offset!");
static_assert(offsetof(UMovable_C, CenterTextGrp) == 0x000288, "Member 'UMovable_C::CenterTextGrp' has a wrong offset!");
static_assert(offsetof(UMovable_C, Disp) == 0x000290, "Member 'UMovable_C::Disp' has a wrong offset!");
static_assert(offsetof(UMovable_C, Gradation) == 0x000298, "Member 'UMovable_C::Gradation' has a wrong offset!");
static_assert(offsetof(UMovable_C, Image_94) == 0x0002A0, "Member 'UMovable_C::Image_94' has a wrong offset!");
static_assert(offsetof(UMovable_C, Movable) == 0x0002A8, "Member 'UMovable_C::Movable' has a wrong offset!");
static_assert(offsetof(UMovable_C, MovableDesc2) == 0x0002B0, "Member 'UMovable_C::MovableDesc2' has a wrong offset!");
static_assert(offsetof(UMovable_C, MovalDesc) == 0x0002B8, "Member 'UMovable_C::MovalDesc' has a wrong offset!");
static_assert(offsetof(UMovable_C, NameGrp) == 0x0002C0, "Member 'UMovable_C::NameGrp' has a wrong offset!");
static_assert(offsetof(UMovable_C, ResizableWidget) == 0x0002C8, "Member 'UMovable_C::ResizableWidget' has a wrong offset!");
static_assert(offsetof(UMovable_C, TextBg1) == 0x0002D0, "Member 'UMovable_C::TextBg1' has a wrong offset!");
static_assert(offsetof(UMovable_C, TextBG2) == 0x0002D8, "Member 'UMovable_C::TextBG2' has a wrong offset!");
static_assert(offsetof(UMovable_C, TextBG3) == 0x0002E0, "Member 'UMovable_C::TextBG3' has a wrong offset!");
static_assert(offsetof(UMovable_C, TextBG4) == 0x0002E8, "Member 'UMovable_C::TextBG4' has a wrong offset!");
static_assert(offsetof(UMovable_C, TextBGSwitch) == 0x0002F0, "Member 'UMovable_C::TextBGSwitch' has a wrong offset!");
static_assert(offsetof(UMovable_C, Widget) == 0x0002F8, "Member 'UMovable_C::Widget' has a wrong offset!");
static_assert(offsetof(UMovable_C, CreatedUserWidget) == 0x000300, "Member 'UMovable_C::CreatedUserWidget' has a wrong offset!");
static_assert(offsetof(UMovable_C, bEnableDrag) == 0x000308, "Member 'UMovable_C::bEnableDrag' has a wrong offset!");
static_assert(offsetof(UMovable_C, bEditMode) == 0x000309, "Member 'UMovable_C::bEditMode' has a wrong offset!");
static_assert(offsetof(UMovable_C, TextId) == 0x00030C, "Member 'UMovable_C::TextId' has a wrong offset!");
static_assert(offsetof(UMovable_C, GradationType) == 0x000310, "Member 'UMovable_C::GradationType' has a wrong offset!");

}

