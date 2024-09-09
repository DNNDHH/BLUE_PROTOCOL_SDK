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
	 * WidgetBlueprintGeneratedClass MiniMapWidget.MiniMapWidget_C
	 * Size -> 0x0028 (FullSize[0x03D8] - InheritedSize[0x03B0])
	 */
	class UMiniMapWidget_C : public USBMiniMapWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Frame;                                                   // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector2D                                           InPosition;                                              // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           InSize1;                                                 // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           InSize2;                                                 // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void OnUnbind();
		void OnBind();
		void OnLoaded_DA7A4A034051FF2A21620C9351A36972(class UObject* Loaded);
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void UnbindVisibleSettingChangeDelegate();
		void BindVisibleSettingChangeDelegate();
		void PreConstruct(bool IsDesignTime);
		void LoadBG();
		void ExecuteUbergraph_MiniMapWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
