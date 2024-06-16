#pragma once

 

// Package: ShortcutRingIcon_Command

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRingIcon_Command.ShortcutRingIcon_Command_C
// 0x0020 (0x0380 - 0x0360)
class UShortcutRingIcon_Command_C final : public USBShortcutRingIconCommand
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPressed;                                       // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0370(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandIcon_Tooltip_C*                 ToolTip;                                           // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShortcutRingIcon_Command(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayAnimPressed();
	class UWidget* GetToolTip();
	void OnSetEnableToolTip(bool InEnable);
	void OnExecuteError();

	void CommandIDToKeyconfigItems(EShortcutIconCommandID InId, EConfig_KeyconfigItems* KeyConfigItems) const;
	void GetKeyconfigItemsTextID(EConfig_KeyconfigItems Type, int32* TextId) const;
	bool GetKeyconfigItemsStr(EShortcutIconCommandID CommandID, class FString* OutString) const;
	bool GetBookmarkFieldStr(EShortcutIconCommandID CommandID, class FString* OutString) const;
	bool GetBookmarkFieldAbbrStr(EShortcutIconCommandID CommandID, class FString* OutString) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRingIcon_Command_C">();
	}
	static class UShortcutRingIcon_Command_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRingIcon_Command_C>();
	}
};
static_assert(alignof(UShortcutRingIcon_Command_C) == 0x000008, "Wrong alignment on UShortcutRingIcon_Command_C");
static_assert(sizeof(UShortcutRingIcon_Command_C) == 0x000380, "Wrong size on UShortcutRingIcon_Command_C");
static_assert(offsetof(UShortcutRingIcon_Command_C, UberGraphFrame) == 0x000360, "Member 'UShortcutRingIcon_Command_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Command_C, AnimPressed) == 0x000368, "Member 'UShortcutRingIcon_Command_C::AnimPressed' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Command_C, CanvasPanel_0) == 0x000370, "Member 'UShortcutRingIcon_Command_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Command_C, ToolTip) == 0x000378, "Member 'UShortcutRingIcon_Command_C::ToolTip' has a wrong offset!");

}

