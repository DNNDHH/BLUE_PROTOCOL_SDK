#pragma once

 

// Package: MiniMapWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapWidget.MiniMapWidget_C
// 0x0028 (0x03D8 - 0x03B0)
class UMiniMapWidget_C final : public USBMiniMapWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Frame;                                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              In_Position;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              In_Size1;                                          // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              In_Size2;                                          // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MiniMapWidget(int32 EntryPoint);
	void LoadBG();
	void PreConstruct(bool IsDesignTime);
	void BindVisibleSettingChangeDelegate();
	void UnbindVisibleSettingChangeDelegate();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void OnLoaded_DA7A4A034051FF2A21620C9351A36972(class UObject* Loaded);
	void OnBind();
	void OnUnbind();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapWidget_C">();
	}
	static class UMiniMapWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapWidget_C>();
	}
};
static_assert(alignof(UMiniMapWidget_C) == 0x000008, "Wrong alignment on UMiniMapWidget_C");
static_assert(sizeof(UMiniMapWidget_C) == 0x0003D8, "Wrong size on UMiniMapWidget_C");
static_assert(offsetof(UMiniMapWidget_C, UberGraphFrame) == 0x0003B0, "Member 'UMiniMapWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiniMapWidget_C, Frame) == 0x0003B8, "Member 'UMiniMapWidget_C::Frame' has a wrong offset!");
static_assert(offsetof(UMiniMapWidget_C, In_Position) == 0x0003C0, "Member 'UMiniMapWidget_C::In_Position' has a wrong offset!");
static_assert(offsetof(UMiniMapWidget_C, In_Size1) == 0x0003C8, "Member 'UMiniMapWidget_C::In_Size1' has a wrong offset!");
static_assert(offsetof(UMiniMapWidget_C, In_Size2) == 0x0003D0, "Member 'UMiniMapWidget_C::In_Size2' has a wrong offset!");

}

