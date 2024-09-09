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
	 * WidgetBlueprintGeneratedClass KeyConfig_Radio.KeyConfig_Radio_C
	 * Size -> 0x0051 (FullSize[0x02C9] - InheritedSize[0x0278])
	 */
	class UKeyConfig_Radio_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Changed;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_NewMark;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Label;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadioButtonsH_C*                                    RadioButtonsH;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FRadioButtonData>                            RadioButtonData;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             SelectRadioButton;                                       // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EConfig_KeyconfigItems                                     Type;                                                    // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_JGYU[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextId;                                                  // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bChanged;                                                // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetNewMark(bool bShowNewMark);
		void SetChanged(bool bChanged);
		void PreConstruct(bool IsDesignTime);
		void ReInitData(TArray<struct FRadioButtonData> RadioButtonData);
		void SelectButton(bool IsChecked, class URadioButton_C* RadioButton, int32_t Index);
		void SetFocus(int32_t Index);
		void ExecuteUbergraph_KeyConfig_Radio(int32_t EntryPoint);
		void SelectRadioButton__DelegateSignature(int32_t Index, EConfig_KeyconfigItems Type);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
