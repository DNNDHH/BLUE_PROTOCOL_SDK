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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.GetSelectStorageNo
	 */
	struct UImagine_StorageSelector_C_GetSelectStorageNo_Params
	{
	public:
		int32_t                                                    StorageNo;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.IsStorage
	 */
	struct UImagine_StorageSelector_C_IsStorage_Params
	{
	public:
		bool                                                       CurrentIsStorage;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.UpdateStorageView
	 */
	struct UImagine_StorageSelector_C_UpdateStorageView_Params
	{	};

	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.Construct
	 */
	struct UImagine_StorageSelector_C_Construct_Params
	{	};

	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UImagine_StorageSelector_C_BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.Set RecepiData
	 */
	struct UImagine_StorageSelector_C_SetRecepiData_Params
	{
	public:
		struct FCharacterCraftRecepi                               RecepiData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UImagine_StorageSelector_C_BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UImagine_StorageSelector_C_BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Imagine_StorageSelector.Imagine_StorageSelector_C.ExecuteUbergraph_Imagine_StorageSelector
	 */
	struct UImagine_StorageSelector_C_ExecuteUbergraph_Imagine_StorageSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WPYB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
