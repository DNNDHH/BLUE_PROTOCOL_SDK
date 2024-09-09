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
	 * BlueprintGeneratedClass BP_P019HUDComponent.BP_P019HUDComponent_C
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UBP_P019HUDComponent_C : public USBClassHUDComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		ESBUIType GetUIType();
		void OnUpdateLayoutView();
		void OnRemoveUI();
		void OnCreateUI();
		void OnUnbind();
		void OnBind();
		void UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void BindUIVisibleSettingChange();
		void UnbindUIVisibleSettingChange();
		void OnChangeShowAlwaysHUD_event(bool bIsShow);
		void BindOnChangeShowAlwaysHUD();
		void UnbindOnChangeShowAlwaysHUD();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_P019HUDComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
