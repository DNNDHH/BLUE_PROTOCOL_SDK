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
	 * WidgetBlueprintGeneratedClass GuildAttributeIconBtn.GuildAttributeIconBtn_C
	 * Size -> 0x0538 (FullSize[0x07B0] - InheritedSize[0x0278])
	 */
	class UGuildAttributeIconBtn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         CB_Check;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgSelected;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchEdit;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EGuildAttribute                                            Attribute;                                               // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bOnChecked;                                              // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1Z9M[0x6];                                   // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttribText;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FButtonStyle                                        StyleNormal;                                             // 0x02C0(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        StyleSelected;                                           // 0x0538(0x0278) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		class UWidget* GetToolTipWidget_1();
		void SetChecked(bool bIsCheck);
		void GetAttrib(EGuildAttribute* Attribute);
		void IsCheck(bool* IsCheck);
		void OnLoaded_BBCADD534C9D43FF5AB95D8D8A7DF76A(class UObject* Loaded);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void InitializeAttribute();
		void BndEvt__CB_Check_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void SetEdiable(bool IsEnabled);
		void BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__GuildAttributeIconBtn_CB_Check_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_GuildAttributeIconBtn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
