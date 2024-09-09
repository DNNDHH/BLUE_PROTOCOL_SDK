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
	 * WidgetBlueprintGeneratedClass ResolutionSettingPanel.ResolutionSettingPanel_C
	 * Size -> 0x00C0 (FullSize[0x0338] - InheritedSize[0x0278])
	 */
	class UResolutionSettingPanel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBComboBoxCmn01_C*                                  Cmb_Resolution;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadioButtons_C*                                     RadioButtons;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        Timer;                                                   // 0x0290(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           DefaultSize;                                             // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    sec;                                                     // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O55R[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Dialog_C*                                        Dialog;                                                  // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DialogText;                                              // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FIntPoint>                                   SIzes;                                                   // 0x02C8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		EWindowMode                                                WinMode;                                                 // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GETF[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           ApplySize;                                               // 0x02DC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWindowMode                                                NextWinMode;                                             // 0x02E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IB67[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FIntPoint>                      Viewports;                                               // 0x02E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetupResolutionList();
		void AddOptionByCustomSize(const struct FIntPoint& Size);
		void AddOptionBySize(const struct FIntPoint& Size);
		void FindNearySupportedPoint(const struct FIntPoint& Resolutions, struct FIntPoint* Finded);
		void GetFilteredResolutions(TArray<struct FIntPoint>* FilterdResolutions);
		class UWidget* On_Cmb_Resolution_GenerateWidget_1(const class FString& item);
		void ExecuteResolutionPoint(const struct FIntPoint& Size);
		void ExecureResolutionStr(const class FString& resStr);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnSelectionChanged(const class FString& SelectedItem, ESelectInfo SelectionType);
		void TimerEvt();
		void WindowMode(bool IsChecked, class URadioButton_C* RadioButton, int32_t Index);
		void ShowConfirmDialog();
		void ExecuteUbergraph_ResolutionSettingPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
