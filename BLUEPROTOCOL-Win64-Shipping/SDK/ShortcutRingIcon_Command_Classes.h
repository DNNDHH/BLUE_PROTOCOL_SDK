#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass ShortcutRingIcon_Command.ShortcutRingIcon_Command_C
	 * Size -> 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
	 */
	class UShortcutRingIcon_Command_C : public USBShortcutRingIconCommand
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimPressed;                                             // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandIcon_Tooltip_C*                              ToolTip;                                                 // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnExecuteError();
		void OnSetEnableToolTip(bool InEnable);
		bool GetBookmarkFieldAbbrStr(EShortcutIconCommandID CommandID, class FString* OutString);
		bool GetBookmarkFieldStr(EShortcutIconCommandID CommandID, class FString* OutString);
		bool GetKeyconfigItemsStr(EShortcutIconCommandID CommandID, class FString* OutString);
		void GetKeyconfigItemsTextID(EConfig_KeyconfigItems Type, int32_t* TextId);
		void CommandIDToKeyconfigItems(EShortcutIconCommandID InId, EConfig_KeyconfigItems* KeyConfigItems);
		class UWidget* GetToolTip();
		void PlayAnimPressed();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void ExecuteUbergraph_ShortcutRingIcon_Command(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
